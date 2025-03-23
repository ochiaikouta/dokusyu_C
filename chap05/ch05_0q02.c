#include <stdio.h>
int main(int argc, char *argv[])
{
    if(1 == argc){
        puts("Hello world!!");
    } else {
        puts(argv[1]);
    }
}