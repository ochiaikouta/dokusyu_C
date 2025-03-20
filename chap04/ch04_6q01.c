#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if(argc != 4){
        return 1;
    } else {
        int x = atoi(argv[1]);
        int y = atoi(argv[2]);
        int z = atoi(argv[3]);
        
        switch (x)
        {
        case 0:
            printf("%i\n", y + z);
            return 0;
            break;
        case 1:
            printf("%i\n", y - z);
            return 0;
            break;
        case 2:
            printf("%i\n", y * z);
            return 0;
            break;
        case 3:
            printf("%i\n", y / z);
            return 0;
            break;
        default:
            puts("1st argument should be 0 to 3");
            return 2;
            break;
        }
    }
}