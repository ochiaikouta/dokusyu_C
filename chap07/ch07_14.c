#include <stdio.h>
#include <string.h>
#define MAX_NAME_LEN 5
int main(int argc, char *argv[])
{
    if(2 == argc){
        //null文字用に1要素を確実に確保
        char name[ MAX_NAME_LEN + 1];
        strncpy(name, argv[1], MAX_NAME_LEN);
        //最後の要素を確実にnull文字にする
        name[MAX_NAME_LEN] = '\0';
        printf("Hello %s\n", name);
    }
}