#include <stdio.h>
int consumption_tax(int x) //消費税額を返す関数
{
    return x * 8 / 100;
}
int main(void)
{
    int price1 = 100;
    int price2 = 230;
    printf("%i\n", consumption_tax(price1));
    printf("%i\n", consumption_tax(price2 + 10)); //関数で指定する引数は実行時に評価される

}