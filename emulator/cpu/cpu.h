#include <stdint.h>

typedef struct gbCPU {
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d; 
    uint8_t e;
    uint8_t f;
    uint8_t h;
    uint8_t l;
    uint8_t flags;
    uint16_t sp;
    uint16_t pc; 
} gbCPU;

enum flagList {
    Z_FLAG = 1<<7,
    S_FLAG = 1<<6,
    H_FLAG = 1<<5,
    C_FLAG = 1<<4
};

void cpuInit(gbCPU* cpu);

void setAF(gbCPU* cpu, uint16_t val);