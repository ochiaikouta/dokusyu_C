#include <stdio.h>
int main(void)
{
    int l = 50;
    for (int i = 1; i <= l; i++)
    {
        if(!(i%15)) {
            puts("FizzBuzz");
            continue;
        }
        if(!(i%3)) {
            puts("Fizz");
            continue;
        }
        if(!(i%5)) {
            puts("Buzz");
            continue;
        }
        printf("%i\n",i);
    }
    
}