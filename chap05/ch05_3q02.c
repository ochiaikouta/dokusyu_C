#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int x = INT_MAX;
    for (int i = 1; i < argc; i++) {
        if (0 == atoi(argv[i])) {
            puts("divisor is 0");
            return 1;
        } else {
            x /= atoi(argv[i]);
        }
    }
    printf("%i\n", x);
}