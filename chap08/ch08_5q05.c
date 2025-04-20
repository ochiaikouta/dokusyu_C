#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int compare(const void *p0, const void *p1)
{
    return **(int **)p1 - **(int **)p0;
}

int main(int argc, char *argv[])
{
    int *array[argc - 1];
    int value[argc - 1];
    for (int i = 1; i < argc; i++){
        value[i - 1] = atoi(argv[i]);
        array[i - 1] = &value[i - 1];
    }
    qsort(array, argc - 1, sizeof(int*), compare);
    for (int i = 0; i < argc - 1; i++){
        printf("%d\n", *array[i]);
    }

}