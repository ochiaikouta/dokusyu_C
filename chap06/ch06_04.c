#include <stdio.h>
int main(int argc, char *argv[])
{
    int i = argc;
    do{
        //int i = argc; <=　宣言がされていないエラー
        printf("*");
    }while(i--);
}