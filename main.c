#include <stdio.h>
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
    uint8_t flag;
    uint16_t sp;
    uint16_t pc; 
} gbCPU;

void main() {
    puts("Hello World");
    return 0;
}