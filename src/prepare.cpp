#include "../include/lib/gethome.h"
#include "../include/common.h"

#include <filesystem>
#include <iostream>
#include <cstdlib>

namespace fs = std::filesystem;

void Prepare()
{
    char* Path = gethome();

    if (chdir(Path) != 0)
    {
        std::cerr << "error" << '\n';
        exit(1);
    }

    if (!fs::exists(MIX))
        fs::create_directories(MIX);

    std::cout << "Checking...\n";

    if (chdir(MIX) != 0)
    {
        std::cerr << "error" << '\n';
        exit(1);
    }

    if (!fs::exists(PNK))
        fs::create_directories(PNK);
}

