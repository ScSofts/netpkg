#pragma once
#include "../GeneratorInterface-inl.hh"
#include "../Utils-inl.hh"

struct JSGenerator : public Generator{

// inherited from Generator
    //generate type
    virtual std::string generateType(PackParser::TypeContext *context) override{
        if(context->Bin()){
            return "pack::Bin";
        }else if(context->Hex()){
            return "pack::Hex";
        }else if(context->I16()){
            return "int16_t";
        }else if(context->I32()){
            return "int32_t";
        }else if(context->I64()){
            return "int64_t";
        }else if (context->I8()) {
            return "int8_t";
        }else if (context->Pack()){
            return "pack::Pack";
        }else if(context->Str()){
            return "std::string";
        }else if(context->U16()){
            return "uint16_t";
        }else if(context->U32()){
            return "uint32_t";
        }else if(context->U64()){
            return "uint64_t";
        }else if (context->U8()){
            return "uint8_t";
        }else{
            return "type";
        }
    }
    

    virtual std::string generateDecoratorDef(PackParser::DecoratorDefContext *context) override{
        auto argsContext = context->arguement();
        std::string code{};
        // code += "inline ";
        // code += context->Public() ? "" : "static ";
        //
        code += "function "; 
        code += context->DecoratorName()->getText();
        code += "(";
        for(auto i : argsContext){
            code += visit(i).as<std::string>() + ", ";
        }
        code = from(code).Left(code.length() - 2);
        code += ")";
        code += visit(context->packBlock()).as<std::string>();
        return code;
    }

    virtual std::string generateDecoratorCall(PackParser::DecoratorCallContext *context)override{
        auto name = context->DecoratorName()->getText();
        auto args = context->expression();
        std::string code{};
        code += name;
        code += "(";
        code += "pack, ";
        for(auto i : args){
            code += visit(i).as<std::string>();
            code += ", ";
        }
        code.pop_back(); code.pop_back();
        code += ")";
        isDecorated = true;
        decorateCode = code;
        return code;
    }

    virtual std::string generateArguement(PackParser::ArguementContext *context) override {
        auto type = visit(context->type()).as<std::string>();
        auto name = context->ArguemnetName()->getText();
        return name + "/*" + type + "*/";
    }

    virtual std::string generateExpression(PackParser::ExpressionContext *context) override{
        auto hexContext = context->hexConstant();
        auto numberNode = context->NumberConstant();
        auto stringNode = context->StringConstant();
        auto arguementNameNode = context->ArguemnetName();
        auto innerFunctionContext = context->innerFunction();
        if(hexContext != nullptr){
            return visit(hexContext);//generateHexConstantExpression(hexContext);
        }else if(numberNode){
            return generateNumberConstantExpression(numberNode);
        }else if(stringNode){
            return generateStringConstantExpresssion(stringNode);
        }else if(arguementNameNode){
            thisArgs.push_back({
                .type = nowType,
                .name = arguementNameNode->getText()
            });
            return arguementNameNode->getText();
        }else if(innerFunctionContext){
            return generateInnerFunctionExpression(innerFunctionContext);
        }else if(context->BitReserve()){
            return generateBitReserveExpression(visit(context->expression()[0]).as<std::string>());
        }else if(context->BraceLeft()){
            return generateBraceExpression(visit(context->expression()[0]).as<std::string>());
        }else if(context->BitXOr()){
            return generateBitOperationExpression(visit(context->expression()[0]),visit(context->expression()[1]), BitXor);
        }else if(context->BitAnd()){
            return generateBitOperationExpression(visit(context->expression()[0]),visit(context->expression()[1]), BitAnd);
        }else if(context->BitOr()){
            return generateBitOperationExpression(visit(context->expression()[0]),visit(context->expression()[1]), BitOr);
        }else if(context->Multiply()){
            return generateOperationExpression(visit(context->expression()[0]),visit(context->expression()[1]), Multiply);
        }else if(context->Divide()){
            return generateOperationExpression(visit(context->expression()[0]),visit(context->expression()[1]), Divide);
        }else if(context->Add()){
            return generateOperationExpression(visit(context->expression()[0]),visit(context->expression()[1]), Add);
        }else if(context->Minus()){
            return generateOperationExpression(visit(context->expression()[0]),visit(context->expression()[1]), Minus);
        }else if(context->Mod()){
            return generateOperationExpression(visit(context->expression()[0]),visit(context->expression()[1]), Mod);
        }
        return "";
    }

    virtual std::string generateNumberConstantExpression(antlr4::tree::TerminalNode *node) override{
        return node->getText();
    }
        
    virtual std::string generateHexConstantExpression(PackParser::HexConstantContext *context) override{
        auto byteNodes = context->HexByte();
        std::string bytes = "";
        for(auto i : byteNodes){
            bytes += i->getText();
            bytes += " ";
        }
        bytes.pop_back();
        return '"' + bytes + '"';
    }
    
    virtual std::string generateStringConstantExpresssion(antlr4::tree::TerminalNode *node) override{
        return node->getText();
    }
    
    virtual std::string generateInnerFunctionExpression(PackParser::InnerFunctionContext *context) override{
        return generateInnerFunction(context);
    }
    
    virtual std::string generateBitReserveExpression(std::string expression) override{
        return "~" + expression;
    }
    
    virtual std::string generateBraceExpression(std::string expression) override{
        return "(" + expression + ")";
    }

    
    virtual std::string generatePackBlock(PackParser::PackBlockContext *context) override{
        auto lines = context->packLine();
        std::string code{};
        code += "{\n";
        code += "\tvar pack = new Pack();\n";
        code += "\tpack.Clear();\n";
        std::vector<std::string> linesGenerated{};
        for(auto i : lines){
            std::string lineCode =  visit(i);
            if(linesGenerated.size() > 1){
                if(linesGenerated.back().find("$NextType$")!= std::string::npos){
                    auto &back = linesGenerated.back();
                    back = from(back).replace("$NextType$", nowType)
                                     .replace(", $NextValue$", (
                                                            nowType == "std::string" | 
                                                            nowType == "pack::Bin" |
                                                            nowType == "pack::Hex" |
                                                            nowType == "pack::Pack"
                                                            ) ? ", " + nowValue : "");

                }
            }
            if(!lineCode.empty()){
                lineCode = "\t" + lineCode + ";";
                linesGenerated.push_back(lineCode);
            }
        }
        nowType = nowValue = {};
        code += from(linesGenerated).Join("\n");
        if(isDecorated){
            code += "\n\treturn " + decorateCode + ";";
        }else{
            code += "\n\treturn pack;";
        }
        code += "\n}\n\n";
        isDecorated = false;
        decorateCode = "";
        return code;
    }

    virtual std::string generatePackLine(PackParser::PackLineContext *context) override{
        auto type = nowType = visit(context->type()).as<std::string>();
        auto value = nowValue = visit(context->expression()).as<std::string>();
        if(type == "pack::Bin"){
            return "pack.SetBin(" + value + ")";
        }else if(type == "pack::Hex"){
            return "pack.SetHex(" + value + ")";
        }else if(type == "pack::Pack"){
            return "pack.SetPack(" + value + ")";
        }else if(type == "std::string"){
            return "pack.SetString(" + value + ")";
        }else if(type == "int8_t"){
            return "pack.SetInt8(" + value + ")";
        }else if(type == "int16_t"){
            return "pack.SetInt16(" + value + ")";
        }else if(type == "int32_t"){
            return "pack.SetInt32(" + value + ")";
        }else if(type == "int64_t"){
            return "pack.SetInt64(" + value + ")";
        }else if(type == "uint8_t"){
            return "pack.SetUInt8(" + value + ")";
        }else if(type == "int16_t"){
            return "pack.SetUInt16(" + value + ")";
        }else if(type == "uint32_t"){
            return "pack.SetUInt32(" + value + ")";
        }else if(type == "uint64_t"){
            return "pack.SetUInt64(" + value + ")";
        }
        return "";
    }

    
    virtual std::string generatePackDef(PackParser::PackDefContext *context) override{
        std::string code;
        std::vector<std::string> args;
        if(context->decoratorCall()){
            visit(context->decoratorCall());
        }
        std::string blockCode = visit(context->packBlock());
        
        for(auto i : thisArgs){
            args.push_back(i.name + "/*" + i.type +"*/");
        }
        thisArgs = {};

        code += "function " + context->ArguemnetName()->getText() + "(" + from(args).Join(", ") + ")";
        code += blockCode;
        return code;
    }

    virtual std::string generateBitOperationExpression(std::string left, std::string right, BitOperation bo)override{
        switch (bo) {
            case BitAnd:
                return left + " & " + right;
            break;
            case BitXor:
                return left + " ^ " + right;
            break;
            case BitOr:
                return left + " | " + right;
            break;
        }
    }
    
    
    virtual std::string generateOperationExpression(std::string left,std::string right, Operation op) override{
        switch(op){
            case Generator::Multiply:
                return left + " * " + right;
            break;
            case Generator::Divide:
                return left + " / " + right;
            break;
            case Generator::Add:
                return left + " + " + right;
            break;
            case Generator::Minus:
                return left + " - " + right;
            break;
            case Generator::Mod:
                return left + "%" + right;
            break;
        }
    }

    virtual std::string generateInnerFunction(PackParser::InnerFunctionContext *context) override{
        if(context->RandBin()){
            return from(context->RandBin()->getText()).replace("$$", "");
        }else if(context->RandU8()){
            return "RandU8()";
        }else if(context->RandU16()){
            return "RandU16()";
        }else if(context->RandU32()){
            return "RandU32()";
        }else if(context->RandU64()){
            return "RandU64()";
        }else if(context->RandI8()){
            return "RandI8()";
        }else if(context->RandI16()){
            return "RandI16()";
        }else if(context->RandI32()){
            return "RandI32()";
        }else if(context->RandI64()){
            return "RandI64()";
        }else if(context->Len()){
            return context->Len()->getText();
        }else if(context->LenNext()){
            return "length_of(\"$NextType$\", $NextValue$)";
        }else if(context->TimeStamp()){
            return "Date.now() & 0xffffffff";
        }else{
            return "";
        }
    }

struct Clear{
    Clear(std::function<void(void)> clear):clear(clear){

    }
    ~Clear(){
        clear();
    }
    std::function<void(void)> clear;
};
    //bool
    virtual antlrcpp::Any visitStart(PackParser::StartContext *context) override{
        Clear clear([this]{
            thisArgs = {};
            isDecorated = false;
            nowType = {};
            nowValue = {};
            codeHolder = {};
        });
        auto decoratorContexts = context->decoratorDef();
        auto packContexts = context->packDef();
        this->codeHolder = R"(const { Pack, length_of } = require("./libpack");)";
        codeHolder += "\n\n";
        // if(!this->namespaceName.empty()){
        //     codeHolder += "namespace " + namespaceName + "{";
        // }
        try{
            for(auto i : decoratorContexts){
                codeHolder += this->visit(i).as<std::string>();
            }

            for(auto i : packContexts){
                codeHolder += this->visit(i).as<std::string>();
            }
        }catch(std::exception &e){
            fprintf(stderr, "Error: %s.", e.what());
            return false;
        }catch(const char *&e){
            fprintf(stderr, "Error: %s.", e);
            return false;
        }
        // if(!this->namespaceName.empty()){
        //     codeHolder += "}";
        // }
        std::ofstream file(outputFilePath);
        if(!file.is_open()){
            fprintf(stderr,"Error: Cannot open '%s'.", outputFilePath.c_str());
            return false;
        }
        file.write(codeHolder.c_str(), codeHolder.size());
        return true;
    }


    bool isDecorated = false;
    std::string decorateCode;

    struct PackArg{
        std::string type;
        std::string name;
    };
    std::vector<PackArg> thisArgs;
    std::string codeHolder;
    std::string nowType;
    std::string nowValue;
};