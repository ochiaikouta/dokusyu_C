#include <stdio.h>
int main(void)
{
    int m[2][3];
    m[0][0] = 1;
    m[0][1] = 2;
    m[0][2] = 3;
    m[1][0] = 4;
    m[1][1] = 5;
    m[1][2] = 6;
    int i = 0;
    do {
        int j = 0;
        while(j < 3){
            printf("%i\n", m[i][j]);
            j++;
        }
    } while(++i < 2);
}