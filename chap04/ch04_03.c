#include <stdio.h>
int main(void)
{
    int x = 3;
    if(x = 0){
        printf("x is 0");
    } else {
        puts("x is not 0");
    }
    //バグを防ぐ書き方
    if (0 == x)
    {
        printf("x is 0");
    } else {
        puts("x is not 0");
    }
    
}