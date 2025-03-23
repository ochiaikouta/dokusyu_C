#include <stdio.h>
int main(void)
{
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 5; y++) {
            for (int z = 0; z < 5; z++) {
                printf("x:%i, y:%i, z:%i\n", x, y, z);
                if(x == 1 && y == 2 && z == 3) {
                    goto break_the_loops;
                }
            }
        }
    }
break_the_loops:
    puts("end");

}