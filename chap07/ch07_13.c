#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    if(3 == argc) {
        char result[strlen(argv[1]) + strlen(argv[2]) + 1];
        puts(strcat(strcpy(result, argv[1]), argv[2]));
    }
}