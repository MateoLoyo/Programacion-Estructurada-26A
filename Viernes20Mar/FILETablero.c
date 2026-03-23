#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char Tablero[5][5];
    char Nombre[50];
    char Frase[50];
    FILE *Archivo;

    for(int i = 0; i < 5; i++) // Inicializar Tablero
    {
        for(int j = 0; j < 5; j++)
        {
            Tablero[i][j] = '~';
        }
    }
    Tablero[1][2] = 'B';
    Tablero[3][4] = 'X';
    Tablero[2][1] = '0';

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++) // Imprimir Tablero
        {
            printf("%c ", Tablero[i][j]);
        }
        printf("\n");
    }

    printf("Ingresa tu nombre: "); // Ingresar nombre
    fgets(Nombre, sizeof(Nombre), stdin);
    Nombre[strcspn(Nombre, "\n")] = '\0';

    Archivo = fopen("TableroB.txt", "w"); // escribe en archivo todo
    fprintf(Archivo, "%s\n", Nombre);
    fprintf(Archivo, "Mateo Loyo Martinez\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            fprintf(Archivo, "%c ", Tablero[i][j]);
        }
        fprintf(Archivo, "\n");
    }
    fprintf(Archivo, "Mateo Loyo Martinez\n");
    fprintf(Archivo, "%s\n", Nombre);
    fclose(Archivo);

    // Leer nombre ingresado del archivo e imprimir
    Archivo = fopen("TableroB.txt", "r");
    fgets(Frase, sizeof(Frase), Archivo); // Leer nombre ingresado
    Frase[strcspn(Frase, "\n")] = '\0';
    printf("\nNombre sacado del archivo: %s\n", Frase);
    fclose(Archivo);

    return 0;
}
