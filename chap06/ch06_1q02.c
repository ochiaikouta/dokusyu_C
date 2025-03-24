#include <stdio.h>
int main(int argc, char *argv[])
{
    if(3 != argc){
        puts("give filename");
        return 1;
    }
    FILE *src = fopen(argv[1], "r");
    FILE *dst = fopen(argv[2], "w");
    int ch;
    while((ch = fgetc(src)) != EOF){
        fputc(ch, dst);
    }
    fclose(src);
    fclose(dst);

}