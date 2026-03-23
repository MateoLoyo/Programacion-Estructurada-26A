#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Tablero[5][5];
    char Nombre[50];
    char Frase[50];
    char Frase2[50];
    FILE *Archivo;

    for(int i = 0; i < 5; i++)
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
        for(int j = 0; j < 5; j++)
        {
            printf("%c ", Tablero[i][j]);
        }
        printf("\n");
    }

    printf("Ingresa tu nombre: ");
    fgets(Nombre, sizeof(Nombre), stdin);
    Nombre[strcspn(Nombre, "\n")] = '\0';

    Archivo = fopen("TableroB.txt", "w");
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

    Archivo = fopen("TableroB.txt", "r");

    fgets(Frase, sizeof(Frase), Archivo);
    Frase[strcspn(Frase, "\n")] = '\0';

    fgets(Frase2, sizeof(Frase2), Archivo);
    Frase2[strcspn(Frase2, "\n")] = '\0';

    printf("\nNombre ingresado:  %s\n", Frase);
    printf("Nombre del codigo: %s\n", Frase2);

    fclose(Archivo);
    return 0;
}
