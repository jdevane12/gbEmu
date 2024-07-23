#include <stdio.h>
#include "cpu.h"

int emuRun(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: "); // Come back to finish implementation.
        return -1;
    }

    if (!rom_load(argv[1])) {
        printf("Invalid ROM file, failed to load %s\n", argv[1]);
        return -2;
    }
    
    static gbCPU cpu;
    cpuInit(&cpu);

}