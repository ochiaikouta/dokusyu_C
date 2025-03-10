#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    printf("%f\n", atof(argv[1]) + atof(argv[2]));
    printf("%f\n", atof(argv[1]) - atof(argv[2]));
    printf("%f\n", atof(argv[1]) * atof(argv[2]));
    printf("%f\n", atof(argv[1]) / atof(argv[2]));
}