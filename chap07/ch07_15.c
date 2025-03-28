#include <stdio.h>
#include <string.h>
#define MAX_NAME_LEN 5
#define HELLO "Hello "
int main(int argc, char *argv[])
{
    if (2 == argc) {
        size_t hello_len = strlen(HELLO);
        //null文字用に1要素余分に確保
        char hello[hello_len + MAX_NAME_LEN + 1];
        strcpy(hello, HELLO);
        strncat(hello, argv[1], MAX_NAME_LEN);
        //null文字はstrncatが設定済み
        puts(hello);
    }
}