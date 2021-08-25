#include <iostream>
#include <fstream>
#include <string>
#include "Application.h"

int main(int argc, const char** argv) {
    Application app;
    ArgumentParser parser({argv, argv + argc});
    parser.start(&app);
    return 0;
}