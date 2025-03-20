#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if(argc != 2){
        puts("specify a number");
    } else {
        switch (atoi(argv[1])%5)
        {
        case 0:
            puts("ZERO");
            break;
        case 1:
            puts("ONE");
            break;
        case 2:
            puts("TWO");
            break;
        case 3:
            puts("TREE");
            break;
        case 4:
            puts("FOUR");
            break;
        default:
            break;
        }
    }
}