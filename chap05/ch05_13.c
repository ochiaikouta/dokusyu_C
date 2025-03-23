#include <stdio.h>
int main(void)
{
    for (int i = 0; i < 8; i++) {
        switch (i%3){
            case 0:
                puts("Fizz");
                break;
            case 1:
                puts("Fizz + 1");
                break;
            case 2:
                goto exit_from_loop;
            default :
                puts("bug! never come here");
        }
    }
exit_from_loop:
    puts("end");
}