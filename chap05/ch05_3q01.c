#include <stdio.h>

int main(void)
{
    int x = 1;
    for (; ;) {
        x += (2*x);
        if (x < 0) {
            break;
        }
    }
    printf("%i\n", x);
    
}