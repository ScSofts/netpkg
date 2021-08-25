#include "Application.h"
#include <cstdio>
#include "../gen/PackLexer.h"
#include "../gen/PackVisitor.h"
#include "Utils-inl.hh"


void Application::run(ApplicationArgs *args){
    for(auto file : args->sourcesToCompile){
        if(!checkFileExists(file)){
            fprintf(stderr, "Error: Cannot open '%s' to compile.\n", file.c_str());
            continue;
        }
        //else
        antlr4::ANTLRInputStream input;
        std::ifstream fs(file);
        input.load(fs);
        PackLexer lexer(&input);
        antlr4::BufferedTokenStream bts(&lexer);
        PackParser parser(&bts);
        if(compile(args, parser, file)){
            auto moduleName = getModuleName(file);
            printf("Compile: %s => %s \n", file.c_str(), (args->options["-o"] + "/" + moduleName + args->fileExtension).c_str() );
            continue;
        }else{
            fprintf(stderr, "Warning: Failed to compile %s.\n", file.c_str());
            continue;
        }
    }
}

bool Application::checkFileExists(std::string filename){
    FILE *file = nullptr;
#ifdef _MSC_VER
    fopen_s(&file, filename.c_str(), "r");
#else
    file = fopen(filename.c_str(), "r");
#endif
    if(file){ 
        fclose(file);
        return true;
    }
    return false;
}

std::string Application::getModuleName(std::string filename){
    auto holder = from(filename);
    // a/b\c.pack
    size_t seperatorPoisition = holder.rfind("/");
    if(seperatorPoisition != std::string::npos){
        holder = holder.Right(holder.length() - seperatorPoisition);
    }
    
    seperatorPoisition = holder.rfind("\\");
    if(seperatorPoisition != std::string::npos){
        holder = holder.Right(holder.length() - seperatorPoisition);
    }
    
    if(!holder.endWith(".pack")) 
        return holder;
    else{
        return holder.Left(holder.length() - 5);
    }
}

bool Application::compile(ApplicationArgs *args,PackParser &parser, std::string filename){
    auto moduleName = getModuleName(filename);
    args->generator->outputFilePath = args->options["-o"] + "/" + moduleName + args->fileExtension;
    args->generator->namespaceName = args->options["-ns"];
    return args->generator->visit(parser.start()).as<bool>();
}