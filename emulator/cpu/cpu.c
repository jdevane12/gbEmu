#include <stdint.h>
#include "cpu.h"

void setAF(gbCPU* cpu, uint16_t val) {
    cpu->a = (uint8_t)(val>>8);
    cpu->f = (uint8_t) (val & 0x0000ffff);
}