#include <stdio.h>
int main(int argc, char *argv[])
{
    if(argc > 5){
        puts("argc > 5");
    } else if (2 == argc){
        puts("argc == 2");
    } else if (argc > 1){
        puts("argc > 1");
    } else {
        puts("not match");
    }
}