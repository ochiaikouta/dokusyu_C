#include <stdio.h>
#include <uchar.h>
#include <wchar.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_CTYPE, "ja_JP.utf-8");
    printf("%ls\n", L"日本語");
}