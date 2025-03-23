#include <stdio.h>
int main(void)
{
    int l = 30;
    for (int i = 1; i <= l; i++)
    {
        if(!(i%6)){
            continue;
        }
        printf("%i\n", i);
    }
    
}