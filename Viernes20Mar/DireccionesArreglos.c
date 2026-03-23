#include <stdio.h>
#include <stdlib.h>
int main()
{
    char Nombre[4][20];
    char ArregloChar[6] = {'M', 'A', 'T', 'E', 'O', '\0'};
    int Numeros[5];
    int i;
    printf("\n==========================\n");
    printf("Ingresa tu nombre completo:");
    printf("\n==========================\n");
    for(i = 0; i < 2; i++)
    {
        printf("Ingresa tu %d Nombre: ", i+1);
        scanf("%s", Nombre[i]);
    }
    for(i = 0; i < 2; i++)
    {
        printf("Ingresa tu %d Apellido: ", i+1);
        scanf("%s", Nombre[i+2]);
    }
    printf("\n================================================\n");
    printf("El Nombre ingresado fue: %s %s %s %s\n", Nombre[0],
           Nombre[1], Nombre[2], Nombre[3]);
    printf("\nLa direccione de memoria de %s fue: %p\n", Nombre[0], Nombre[0]);
    printf("\nLa direccione de memoria de %s fue: %p\n", Nombre[1], Nombre[1]);
    printf("\nLa direccione de memoria de %s fue: %p\n", Nombre[2], Nombre[2]);
    printf("\nLa direccione de memoria de %s fue: %p\n", Nombre[3], Nombre[3]);
    printf("\n\nDireccion de memoria Nombre completo: %p\n", Nombre);
    printf("\n================================================\n");
    printf("Direccion de memoria de las partes de un\narreglo de caracteres :\n");
    printf("================================================\n");
    printf("%c: %p\n", ArregloChar[0], &ArregloChar[0]);
    printf("%c: %p\n", ArregloChar[1], &ArregloChar[1]);
    printf("%c: %p\n", ArregloChar[2], &ArregloChar[2]);
    printf("%c: %p\n", ArregloChar[3], &ArregloChar[3]);
    printf("%c: %p\n", ArregloChar[4], &ArregloChar[4]);
    printf("Direccion de %s es: %p\n", ArregloChar, ArregloChar);
    printf("\n================================================\n");
    for(i = 0; i < 5; i++)
    {
        printf("Ingresa el %d numero: ", i+1);
        scanf(" %d", &Numeros[i]);
    }
    printf("\nLa direccione de memoria de %d fue: %p\n", Numeros[0], &Numeros[0]);
    printf("\nLa direccione de memoria de %d fue: %p\n", Numeros[1], &Numeros[1]);
    printf("\nLa direccione de memoria de %d fue: %p\n", Numeros[2], &Numeros[2]);
    printf("\nLa direccione de memoria de %d fue: %p\n", Numeros[3], &Numeros[3]);
    printf("\nLa direccione de memoria de %d fue: %p\n", Numeros[4], &Numeros[4]);
    printf("\n================================================\n");
    return 0;
}

