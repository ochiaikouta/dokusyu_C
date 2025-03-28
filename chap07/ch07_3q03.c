#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
    if (1 == argc) {
        return 1;
    } else {
        size_t count = 1;
        size_t len[argc - 1]; 
        for (int i = 1; i < argc ; i++) {
            len[i - 1] = strlen(argv[i]);
            count += len[i - 1];
        }
        char st[count];
        size_t index = 0;
        for (int i = 1; i < argc; i++) {
            for (int j = 0; j < len[i - 1]; j++) {
                st[index] = tolower(argv[i][j]);
                index++;
            }
        }
        st[index] = '\0';
        
        puts(st);
    }
}