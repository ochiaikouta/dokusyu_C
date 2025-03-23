#include <stdio.h>
int main(int argc, char *argv[])
{
    int a[] = {1, 2, 3};
    int i = 0;
    printf("%i\n", a[i++]);
    printf("%i\n", a[i++]);
    printf("%i\n", a[i]);
}