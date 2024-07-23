#include <stdint.h>
#include "cpu.h"
#include "cart.h"

void cpuInit(gbCPU* cpu) {
    cpu->pc = 0x100; // Initialize the program counter
    cpu->sp = 0xFFFE;//TODO: Initialize other registers (and clear if needed)
}

void setAF(gbCPU* cpu, uint16_t val) {
    cpu->a = (uint8_t)(val>>8);
    cpu->f = (uint8_t) (val & 0x0000ffff);
}

uint16_t getAF(gbCPU* cpu) {
    uint16_t reg = ((cpu->a)<<8) & ((cpu->f));
    return reg;
}