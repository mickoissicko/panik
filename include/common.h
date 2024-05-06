#ifndef COMMON_H
    #define COMMON_H
#endif

#define MAX_COMMAND_LENGTH 256
#define MAX_DEVICE_PATH 256
#define MAX_INPUT_BUFFER 10

void Prepare();

#ifdef _WIN32
    void nt_InitialConfiguration();
    void nt_StartProgram();
    void nt_Menu();
#else
    void posix_InitialConfiguration();
    void posix_StartProgram();
    void posix_Menu();
#endif

const static int CONFIG_MAX_DEVICE_PATH = 256;

const static char MIX[] = ".mix";
const static char PNK[] = "panik";

