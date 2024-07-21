#include "cpu.h"

int emuRun() {
    static gbCPU cpu;
    cpuInit(&cpu);

}