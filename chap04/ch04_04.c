#include <stdio.h>
#include <stdbool.h>

bool test1(void)
{
    puts("test1");
    return true;
}
bool test2(void)
{
    puts("test2");
    return false;
}
bool test3(void)
{
    puts("test3");
    return true;
}
int main(void)
{
    if(test1() && test2() && test3()){
        puts("all ture");
    }
    if(test1() || test2() || test3()){
        puts("include true");
    }
}