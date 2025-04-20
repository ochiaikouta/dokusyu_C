#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *p0, const void *p1) {
    return strcmp(*(char **)p0, *(char **)p1);
}

int main(int argc, char *argv[]){
    char *array[argc-1];
   for (int i = 1; i < argc; i++) {
        array[i - 1] = argv[i];
   }
   qsort(array, argc - 1, sizeof(char *), compare);
   for (int i = 0; i < argc -1 ; i++) {
    puts(array[i]);
   }
}