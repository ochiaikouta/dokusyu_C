#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool odd(int n)
{
    return n%2 != 0;
}
int main(int argc, char *argv[])
{
    int x = argc - 1;
    if (odd(x)){
        puts("odd");
    } else {
        puts("even");
    }
}