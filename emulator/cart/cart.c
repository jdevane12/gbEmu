#include <stdio.h>
#include <stdint.h>

rom_load(char **arg, uint8_t *m_cart) {
    FILE *rom = fopen(arg, "r");
    fread(m_cart, 1, 0x200000, rom);
    fclose(rom);
}