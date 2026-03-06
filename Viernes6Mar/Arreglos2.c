#include <stdio.h>

int main()
{
    int i;
    int N;

    printf("Ingresa el numero de temperaturas a registrar: ");
    scanf("%d", &N);

    float temp[N];

    for(i=0; i <N; i++)
    {
        printf("ingresa la %d temperatura: ", i+1);
        scanf("%f",  &temp[i]);
    }


    for(i=0; i <N; i++)
    {
        printf("la %d temperatura: %.2f\n", i+1, temp[i]);
    }
    return 0;
}
