#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    if (3 == argc){
        int result = strcmp(argv[1], argv[2]);
        printf("result = %i\n", result);
    }
}