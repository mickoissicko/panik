#include "../include/common.h"

int main()
{
    Prepare();

    #ifdef _WIN32
        nt_Menu();
    #else
        posix_Menu();
    #endif

    return 0;
}

