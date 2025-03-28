#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (2 == argc && 1 == strlen(argv[1])) {

        if (isalpha(argv[1][0])){
            printf("%c\n",'A');    
        } else if (isdigit(argv[1][0])) {
            printf("%c\n",'B'); 
        } else {
            printf("%c\n",'C'); 
        }
    }
}