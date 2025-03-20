#include <stdio.h>
#include <stdbool.h>
bool t(void)
{
    puts("t");
    return true;
}
bool f(void)
{
    puts("f");
    return false;
}
int main(void)
{
    if((t() || f() || t()) && (f() || f() || t()) && (t() || f())){
        puts("true");
    }  else {
        puts("false");
    }
}