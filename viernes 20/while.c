#include <stdio.h>

int main()
{
    int x;
    int suma = 0;

    printf("Escribe un numero (0 para terminar): ");
    scanf("%d", &x);

    while (x != 0)
    {
        suma += x;

        printf("Escribe otro numero (0 para terminar): ");
        scanf("%d", &x);
    }

    printf("La suma es: %d\n", suma);

    return 0;
}
