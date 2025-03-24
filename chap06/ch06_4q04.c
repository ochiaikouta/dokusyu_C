#include <stdio.h>
int main(void)
{
    int count = 0;
    do {
        int ch = getchar();
        printf("%c",ch);
        if (ch == '\n'){
            count++;
        }
    } while(count < 3);
    printf("\n");
}