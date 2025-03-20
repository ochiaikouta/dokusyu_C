#include <stdio.h>
#include <stdint.h>
int main(void)
{
    uint8_t u8 = -1;
    uint16_t u16 = u8;
    uint32_t u32 = u16;
    uint64_t u64  = u32;
    printf("%u, %u, %u, %lu\n", u8, u16, u32, u64);
}