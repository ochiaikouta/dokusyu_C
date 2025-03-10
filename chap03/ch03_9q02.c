#include <stdio.h>
#include <limits.h>
int main(void)
{
    int i = INT_MAX;
    unsigned int u = UINT_MAX;
    long int li = LONG_MAX;
    unsigned long lu = ULLONG_MAX;
    long long int lli = LLONG_MAX;
    unsigned long long llu = ULLONG_MAX;
    printf("%i\n", i);
    printf("%u\n", u);
    printf("%li\n", li);
    printf("%lu\n", lu);
    printf("%lli\n", lli);
    printf("%llu\n", llu);

}