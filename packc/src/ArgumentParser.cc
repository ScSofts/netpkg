#include "Application.h"
#include "Utils-inl.hh"

static constexpr const char* switchs[] = {
    "-l=c++",
    "-l=js"
};

static constexpr const char *options[] = {
    "-ns",
    "-o"
};

ArgumentParser::ArgumentParser(std::vector<std::string> args){
    args.erase(args.begin());
    for(auto i : args){
        auto arguement = from(i).trim();
        for(auto j : switchs){
            if(arguement.str() == j){
                auto language = arguement.split("=")[1];
                appArgs.generator = language_map.at(language.str());
                appArgs.fileExtension = file_extension_map.at(language.str());
                goto next;
            }
        }

        for(auto j : options){
            if(arguement.startWith(j) && arguement.str().find('=') != std::string::npos){
                auto value = arguement.split("=");
                appArgs.options[from(j).str()] = value[1];
                goto next;
            }
        }

        //else
        appArgs.sourcesToCompile.push_back(i);
    next:
        continue;
    }
}

void ArgumentParser::start(Application *app){
    app->run(&this->appArgs);
}