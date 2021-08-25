#pragma once
#include <string>
#include "../gen/PackVisitor.h"
struct Generator:public PackVisitor{
    virtual std::string generateType(PackParser::TypeContext *context) = 0;
    virtual std::string generateDecoratorDef(PackParser::DecoratorDefContext *context) = 0;
    virtual std::string generateDecoratorCall(PackParser::DecoratorCallContext *context) = 0;
    virtual std::string generateArguement(PackParser::ArguementContext *context) = 0;

    virtual std::string generateExpression(PackParser::ExpressionContext *context) = 0;
    virtual std::string generateNumberConstantExpression(antlr4::tree::TerminalNode *node) = 0;
    virtual std::string generateHexConstantExpression(PackParser::HexConstantContext *context) = 0;
    virtual std::string generateStringConstantExpresssion(antlr4::tree::TerminalNode *node) = 0;
    virtual std::string generateInnerFunctionExpression(PackParser::InnerFunctionContext *context) = 0;
    virtual std::string generateBitReserveExpression(std::string expression) = 0;
    virtual std::string generateBraceExpression(std::string expression) = 0;

    virtual std::string generatePackBlock(PackParser::PackBlockContext *context) = 0;
    virtual std::string generatePackLine(PackParser::PackLineContext *context) = 0;
    virtual std::string generatePackDef(PackParser::PackDefContext *context) = 0;

    enum BitOperation{
        BitXor,
        BitAnd,
        BitOr,
    };
    virtual std::string generateBitOperationExpression(std::string left, std::string right, BitOperation bo) = 0;
    
    enum Operation
    {
        Multiply,
        Divide,
        Add,
        Minus,
        Mod,
    };
    virtual std::string generateOperationExpression(std::string left,std::string right, Operation op) = 0;

    virtual std::string generateInnerFunction(PackParser::InnerFunctionContext *context) = 0; 

    std::string outputFilePath;
    std::string namespaceName;

    //inherited from ParserVisiror 
 /**
   * Visit parse trees produced by PackParser.
   */
   
    virtual antlrcpp::Any visitHexConstant(PackParser::HexConstantContext *context) override final{
        return generateHexConstantExpression(context);
    }

    // std::string
    virtual antlrcpp::Any visitType(PackParser::TypeContext *context) override final{
        return generateType(context);
    }

    virtual antlrcpp::Any visitDecoratorDef(PackParser::DecoratorDefContext *context) override final{
        return generateDecoratorDef(context);
    }

    virtual antlrcpp::Any visitDecoratorCall(PackParser::DecoratorCallContext *context) override final{
        return generateDecoratorCall(context);
    }

    virtual antlrcpp::Any visitExpression(PackParser::ExpressionContext *context) override final{
        return generateExpression(context);
    }

    virtual antlrcpp::Any visitArguement(PackParser::ArguementContext *context) override final{
        return generateArguement(context);
    }

    virtual antlrcpp::Any visitPackBlock(PackParser::PackBlockContext *context) override final{
        return generatePackBlock(context);
    }

    virtual antlrcpp::Any visitPackLine(PackParser::PackLineContext *context) override final{
        return generatePackLine(context);
    }

    virtual antlrcpp::Any visitPackDef(PackParser::PackDefContext *context) override final{
        return  generatePackDef(context);
    }

    virtual antlrcpp::Any visitInnerFunction(PackParser::InnerFunctionContext *context) override final{
        return generateInnerFunction(context);
    }
};