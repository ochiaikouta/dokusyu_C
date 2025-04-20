#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[]) {
    int length = strlen(argv[1]);
    char a[length + 1];
    for (int i = 0;  i < length; i++){
        a[i] = argv[1][length - 1- i];
    }
    a[length] = '\0';
    printf("%s\n", a);

}