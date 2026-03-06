#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp1, temp2;
    float temp[24];
    int dummy;
    printf("la direccion de &temp1: %d\n", &temp1);
    printf("la direccion de &temp2: %d\n", &temp2);
    printf("la direccion de temp[24]: %d\n", temp);
    printf("la direccion de &temp[23]: %d\n", &temp[23]);
    printf("la direccion de &dummy: %d\n", &dummy);
    return 0;
}
