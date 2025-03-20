#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2){
        puts("specify a number");
        return 1;
    } else {
        int x = atoi(argv[1]);
        if(x <= 10){
            puts("too small");
        } else if(x > 20){
            puts("too large");
        } else if(x == 15) {
            puts("good");
        } else {
            puts("OK");
        }
    }
}