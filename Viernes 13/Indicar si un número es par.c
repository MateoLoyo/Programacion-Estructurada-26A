#include <stdio.h>

int main()
{
    int Numero;
    printf("Ingresa tu numero entero: ");
    scanf("%d", &Numero);
    if(Numero%2==0)
    {
        printf("tu Numero es par");
    }
    else
    {
        printf("tu Numero es impar");

    }
    return 0;
}
