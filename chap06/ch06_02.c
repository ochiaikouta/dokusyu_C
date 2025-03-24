#include <stdio.h>
int main(int argc, char *argv[])
{
    if(2 != argc){
        puts("give filename");
        return 1;
    }
    FILE *f = fopen(argv[1], "r");
    int ch;
    while((ch = fgetc(f)) != EOF){
        if(ch >= 0x80){
            puts("Not ASCII text!");
            break;
        }
        if(ch < 0x20){
            //binary data
            continue;
        }
        fputc(ch, stdout);
    }
    fclose(f);
}