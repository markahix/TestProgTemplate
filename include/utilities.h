#ifndef UTILITIES_H
#define UTILITIES_H
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <filesystem>
#include <map>
#include <unistd.h>
#include <sstream>
#include "config.h"
#include "globals.h"
#include "constants.h"
namespace fs = std::filesystem;

class Settings
{
    public:
        Settings(int argc, char** argv);
        ~Settings();

};

#endif
