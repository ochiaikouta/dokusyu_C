#include <stdio.h>
int ex1(int x, int y);
int ex2(int x, int y)
{
    printf("ex2: %i\n", x * y);
    return ex1(x, y);
}