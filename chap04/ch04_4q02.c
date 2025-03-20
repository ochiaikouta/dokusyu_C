#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if(2 != argc){
        puts("specify a number");
        return 1;
    } else {
        int x = atoi(argv[1]);
        if(123 == x){
            puts("Bingo!");
        } else if (x > 123){
            puts("greater");
        } else {
            puts("less");
    }
    }
    
    
}