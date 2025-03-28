#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (3 == argc) {
        size_t len1 = strlen(argv[1]);
        size_t len2 = strlen(argv[2]);

        char ch1[len1 + 1];
        char ch2[len2 + 1];

        for (int i = 0; i < len1; i++) {
            char buff = argv[1][i];
            if (isalpha(buff) && isupper(buff)) {
                ch1[i] = tolower(buff);
            } else {
                ch1[i] = buff;
            }
            
        } 
        ch1[len1] = '\0';

        for (int i = 0; i < len2; i++) {
            char buff = argv[2][i];
            if (isalpha(buff) && isupper(buff)) {
                ch2[i] = tolower(buff);
            } else {
                ch2[i] = buff; 
            }
        } 
        ch2[len2] = '\0';
        int res = strcmp(ch1, ch2);
        printf("%i\n", (res > 0) ? 1 : ((res < 0) ? -1 : 0));
    }
}