#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if(argc != 2){
        puts("specify a number");
    } else {
        int x = atoi(argv[1]);
        if((x%30) == 0){
            puts("C");
        } else if((x%10) == 0){
            puts("A");
        } else if((x%3) == 0){
            puts("B");
        } else {
            puts("D");
        }
    }
    
}