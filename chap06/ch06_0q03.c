#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(int argc, char *argv[])
{
    long long int x = 1;
    if(1 == argc){
        puts("no arguments");
        return 1;
    } else {
        for(int i = 1; i < argc; i++){
            long long int val = (long long)atoi(argv[i]);
            if(!val){
                return 1;
            } else if(x*val > (long long)INT_MAX ){
                puts("overflow!");
                break;
            }
            x *= val;
        }
    }
    printf("%lli\n", x);
}