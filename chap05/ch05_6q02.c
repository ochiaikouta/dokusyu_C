#include <stdio.h>
#include <stdint.h>
int main(void)
{
    long long  int x = 1;
    for (int i = 2; ; i++){
        if(x >= INT16_MAX){
            x /= i;
            break;
        }
           
            
        x *= i;
    }
    printf("%lli\n", x);
    x = 1;
    for (int i = 2; ; i++){
        if(x >= INT32_MAX){
            x /= i;
            break;
            
        }
        x *= i;
    }
    printf("%lli\n", x);
}