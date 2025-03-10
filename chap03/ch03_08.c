#include <stdio.h>
#define CONSMPTION_TAX * 8 / 100 //消費税額を計算する
int main(void)
{
    int price1 = 100;
    int price2 = 230;
    printf("%i\n", price1 CONSMPTION_TAX);
    printf("%i\n", price2 CONSMPTION_TAX);
}