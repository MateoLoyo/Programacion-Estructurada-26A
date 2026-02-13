#include <stdio.h>

int main()
{
    int Numero;
    printf("Ingresa tu numero entero: ");
    scanf("%d", &Numero);
    if(Numero%2==1)
    {
        printf("tu Numero es impar");
    }
    else
    {
        printf("tu Numero es par");

    }
    return 0;
}
