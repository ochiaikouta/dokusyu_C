#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    bool found = false;
    for (int x = 1; x < 10; x++) {
        for (int y =1; y < 10; y++) {
            if (x * y > 10) {
                printf("x=%i, y=%i\n", x, y);
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }
}