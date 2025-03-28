#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    if(3 == argc) {
        if (strcmp(argv[1], argv[2]) > 0) {
            puts(argv[1]);
        } else if (strcmp(argv[1], argv[2]) < 0) {
            puts(argv[2]);
        } else {
            puts("same");
        }
    }
}