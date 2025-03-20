#include <stdio.h>
#include <stdbool.h>
bool even(int n)
{
    return (n%2 == 0) ? true : false;   
}
int main(int argc, char *argv[])
{
    bool j = even(argc);
}
