#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_CTYPE, "ja_JP.utf-8");
    for (wchar_t ch = 0x306A; ch <= 0x306E; ch++ ){
        printf("%lc\n", ch);
    }
}