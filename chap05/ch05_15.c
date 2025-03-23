#include <stdio.h>
int main(void)
{
    int i = 0;
begin:
    if(i >= 8) {
        goto exit_from_loop;
    }
    int value = i % 3;
    if (!value) {
        puts("Fizz");
        goto next_i;
    }
    if (value == 1) {
        puts("Fizz + 1");
        goto next_i;
    }
    if (value == 2) {
        goto exit_from_loop;
    }
next_i:
    i++;
    goto begin;
exit_from_loop:
    puts("end");
}