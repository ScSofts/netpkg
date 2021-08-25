#pragma once
#include "ArgumentParser.h"
class Application{
public:
    void run(ApplicationArgs *args);
protected:
    bool checkFileExists(std::string filename);
    bool compile(ApplicationArgs *args,PackParser &parser, std::string filename);
    std::string getModuleName(std::string filename);
};