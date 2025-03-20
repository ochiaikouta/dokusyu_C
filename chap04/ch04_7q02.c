#include <stdio.h>
#include <stdbool.h>
bool even(int n)
{
    if((n%2) == 0){
        return true;
    } else{
        return false;
    }

}

int main(int argc, char *argv[])
{
    bool j = even(argc);
}