#include <stdio.h>
#include <uchar.h>
#include <wchar.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_CTYPE, "ja_JP.utf-8");
    wchar_t a = L'\x3042';
    char16_t a0  = u'\x3042';
    char32_t a1 = U'\x3042';
    printf("%lc\n", a);
}