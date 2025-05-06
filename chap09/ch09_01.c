#include <stdio.h>
int ex2(int x, int y);
int ex1(int x, int y)
{
    printf("ex1: %i\n", x + y);
    return x + y;
}
int main(void)
{
    ex2(5, 6);
}