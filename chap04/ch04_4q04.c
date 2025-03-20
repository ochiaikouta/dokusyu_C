#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if(1 == argc){
        puts("no arguments");
        return 1;
    }
    if(2 == argc){
        int x = atoi(argv[1]);
        if(0 == x%3){
            if(0 == x%5){
                puts("FizBaz");
            } else {
                puts("Fiz");
            }
        } else if (0 == x%5){
            puts("Baz");
        } else {
            puts(argv[1]);
        }
    
    }
}