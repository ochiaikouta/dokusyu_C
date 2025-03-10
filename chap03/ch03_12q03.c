#include <stdio.h>
#include <limits.h>
int main(void)
{
    long long x = INT_MAX;
    printf("%lli\n", (long long)x*x);
}