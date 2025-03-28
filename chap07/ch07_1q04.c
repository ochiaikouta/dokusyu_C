#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_CTYPE, "ja_JP.utf-8");
    if (argc < 2){
        puts("英大文字または数字を入力してください");
        return 1;
    }
    char ch = argv[1][0];
    if (isdigit(ch)){
        printf("%i\n",ch - '0' + 3);
    } else if (isalpha(ch) && isupper(ch)){
        printf("%c\n", tolower(ch));
    } else{
        puts("英大文字または数字を入力してください");
        return 1;
    }
}