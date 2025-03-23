#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    int s[6] = {2, 3, 5, 7, 11, 13};
    for(int i = 30; i <= 80; i++){
        for(int j = 0; j < 6; j++){
            if(i%(s[j]) == 0){
                goto next;                
            }
        }
        printf("%i\n", i);
next:
    }
}