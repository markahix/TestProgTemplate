
#include "utilities.h"

Settings::Settings(int argc, char** argv)
{
    for (int i = 1; i < argc; i++)
    {
        // handling of default globals first.
        if ((std::string)argv[i] == "--debug")
        {
            DEBUG = true;
        }
        if ((std::string)argv[i] == "--hpc-mode")
        {
            HPC_MODE = true;
        }
        if ((std::string)argv[i] == "--container")
        {
            CONTAINER_MODE = true;
        }
        if (((std::string)argv[i] == "--verbose") || ((std::string)argv[i] == "-v"))
        {
            VERBOSE_LOGGING = true;
        }
        if ((std::string)argv[i] == "--dryrun")
        {
            DRYRUN = true;
        }
        // Additional command line arguments should be handled below.  
        // This section is ONLY for parsing the command line into variables, values, and settings.
        // Do *not* attempt to perform additional calculations or make decisions within this function, 
        // as it can lead to crashes and unexpected behaviors.
    }
}

Settings::~Settings()
{
}
