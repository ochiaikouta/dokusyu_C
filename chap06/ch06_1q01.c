#include <stdio.h>
int main(int argc, char *argv[])
{
    int i = 0;
    while (i < argc)
    {
        puts(argv[i]);
        i++;
    }
    
}