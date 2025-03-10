#include <stdio.h>
#include <stdlib.h>
#define P(o) printf("%i\n", x o y);
int main(int argc, char *argv[])
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    P(+)
    P(-)
    P(*)
    P(/)
}