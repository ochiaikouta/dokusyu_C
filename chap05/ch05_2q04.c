#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if (2 != argc){
        puts("usage: ./a.out number");
        return 1;
    }
    int sum = 0;
    int count = atoi(argv[1]) + 1;
    for (int i = 0; i < count; i++)
    {
        sum += i;
    }
    printf("%i\n",sum);
    
}