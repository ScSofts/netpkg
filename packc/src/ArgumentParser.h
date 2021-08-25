#pragma once
#include <vector>
#include <string>
#include <unordered_map>
#include "GeneratorInterface-inl.hh"
#include "generators/CPPGenerator-inl.hh"
#include "generators/JSGenerator-inl.hh"

static const std::unordered_map<std::string, Generator *> language_map = {
    {"c++",new CPPGenerator},
    {"js", new JSGenerator}
};

static const std::unordered_map<std::string, std::string> file_extension_map = {
    {"js",".js"},
    {"c++",".cc"},
};

struct ApplicationArgs{
    Generator *generator;
    std::string fileExtension;
    std::unordered_map<std::string, std::string> options={
        {"-ns", ""},
        {"-o", ""},
    };
    std::vector<std::string> sourcesToCompile;
};

class Application;

class ArgumentParser{
public:
    ArgumentParser(std::vector<std::string> args);
    void start(Application *app);

protected:
    ApplicationArgs appArgs{
        language_map.at("c++"), // TODO: Change to C++
        file_extension_map.at("c++"),
        {
            {"-ns", ""},
            {"-o",  "."}
        }
    };
};