#include <stdio.h>
#include <limits.h>
int main(void)
{
    int x =  INT_MIN;
    long long int y = (unsigned int)x;
    printf("%lli\n", y);
}