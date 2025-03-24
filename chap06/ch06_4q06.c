#include <stdio.h>
int main(void)
{
    int m[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    int i = 0;
    do {
        int j = 0;
        while(j < 3){
            printf("%i\n", m[i][j]);
            j++;
        }
    } while(++i < 2);
}