#include <stdio.h>
int main(void)
{
    int a[4] = {1, 2, 3, 4};
    printf("%i\n", a[0]);
    printf("%i\n", a[1]);
    printf("%i\n", a[2]);
    printf("%i\n", a[3]);
    a[1] += 5;
    a[2] *= 10;
    printf("%i\n", a[1]);
    printf("%i\n", a[2]);

}