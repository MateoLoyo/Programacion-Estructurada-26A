#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char MostrarMenu()
{
    char Opcion;
    printf("///////// Menu de String /////////\n");
    printf(" a) Leer nombre sin espacios (scanf)\n");
    printf(" b) Leer nombre con espacios (fgets)\n");
    printf(" c) Arreglo de integrantes\n");
    printf(" d) Longitud de cadena (strlen)\n");
    printf(" e) Concatenar cadenas (strcat)(strcpy)\n");
    printf(" f) Comparar cadenas (strcmp)\n");
    printf(" g) Copiar cadena (strcpy)\n");
    printf(" h) Salir.\n");
    printf("//////////////////////////////////\n");


    printf("Elige una opcion: ");
    scanf(" %c", &Opcion);
    printf("\n\n//////////////////////////////////\n");
    return Opcion;
}

void LeerNombreSinEspacios(const int TAMANO)
{
    char Nombre1 [TAMANO];
    char Nombre2 [TAMANO];
    printf(" En esta opcion deberas escribir \n dos diferentes nombres sin\n espacios.");
    printf("\n//////////////////////////////////\n");
    printf("Ingresa el primer nombre:");
    scanf("%s", Nombre1);
    printf("Ingresa el segundo nombre:");
    scanf("%s", Nombre2);
    printf("\n//////////////////////////////////\n");
    printf("Diste los siguientes nombres: \n");
    printf(" 1. %s\n", Nombre1);
    printf(" 2. %s\n", Nombre2);
    printf("\n//////////////////////////////////\n");
    printf("Escribe enter para continuar.");
    getchar();
    getchar();
    system("cls");
}

void LeerNombreConEspacios(const int TAMANO)
{
    char NombreCompleto [TAMANO];
    printf(" En esta opcion deberas ingresar\n un nombre completo.");
    printf("\n//////////////////////////////////\n");
    printf("Ingresa el nombre:\n-");
    getchar();
    fgets(NombreCompleto, sizeof(NombreCompleto), stdin);
    NombreCompleto[strcspn(NombreCompleto, "\n")]=0;
    printf("\n//////////////////////////////////\n");
    printf("El nombre ingresado es:\n-%s", NombreCompleto);
    printf("\n\n//////////////////////////////////\n");
    printf("Escribe enter para continuar.");
    getchar();
    system("cls");
}

void ArregloDeIntegrantes(const int TAMANO)
{
    char Lista [3][TAMANO];
    int i;
    printf(" En esta opcion deberas ingresar\n una lista de nombres completos.");
    printf("\n//////////////////////////////////\n");
    printf("Ingresa los nombres a la lista:\n");
    getchar();
    for(i=0; i<3; i++)
    {
        printf("%d. ", i+1);
        fgets(Lista[i], sizeof(Lista[i]), stdin);
        Lista[i][strcspn(Lista[i], "\n")]=0;
    }
    printf("\n//////////////////////////////////\n");
    printf("Lista de nombres:\n");

    for(i=0; i<3; i++)
    {
        printf("%d. ", i+1);
        printf("%s\n", Lista[i]);
    }
    printf("\n//////////////////////////////////\n");
    printf("Escribe enter para continuar.");
    getchar();
    system("cls");
}

void LongitudDeCadena(const int TAMANO)
{
    char Lista [3][TAMANO];
    int i;
    int longitud;
    printf(" En esta opcion obtendras la\n longitud de 3 nombres");
    printf("\n//////////////////////////////////\n");
    printf("Ingresa los nombres a la lista:\n");
    getchar();
    for(i=0; i<3; i++)
    {
        printf("%d. ", i+1);
        fgets(Lista[i], sizeof(Lista[i]), stdin);
        Lista[i][strcspn(Lista[i], "\n")]=0;
    }
    printf("\n//////////////////////////////////\n");
    printf("Lista de nombres:\n");

    for(i=0; i<3; i++)
    {
        longitud= strlen(Lista[i]);
        printf("%d. ", i+1);
        printf("la longitud de (%s) es de %d caracteres.\n", Lista[i], longitud);
    }
    printf("\n//////////////////////////////////\n");
    printf("Escribe enter para continuar.");
    getchar();
    system("cls");
}

void ConcatenarCadenas(const int TAMANO)
{
    char Lista[3][TAMANO];
    char NombreEquipo [TAMANO*4];
    int i;
    printf(" En esta opcion deberas ingresar\n los nombres del equipo PRIPRIME.");
    printf("\n//////////////////////////////////\n");
    printf("Ingresa los nombres a la lista:\n");
    getchar();
    for(i=0; i<3; i++)
    {
        printf("%d. ", i+1);
        fgets(Lista[i], sizeof(Lista[i]), stdin);
        Lista[i][strcspn(Lista[i], "\n")]=0;
    }
    printf("\n//////////////////////////////////\n");
    strcpy(NombreEquipo, "PRIPRIME");
    strcat(NombreEquipo, ":\n-");
    strcat(NombreEquipo, Lista[0]);
    strcat(NombreEquipo, "\n-");
    strcat(NombreEquipo, Lista[1]);
    strcat(NombreEquipo, "\n-");
    strcat(NombreEquipo, Lista[2]);

    printf("Integrantes del equipo %s", NombreEquipo);

    printf("\n//////////////////////////////////\n");
    printf("Escribe enter para continuar.");
    getchar();
    system("cls");
}

void CompararCadenas(const int TAMANO)
{
    char NombreCompleto [TAMANO];
    char NombreCompleto2 [TAMANO];
    printf(" En esta opcion compararas dos\n nombres para ver si son iguales");
    printf("\n//////////////////////////////////\n");
    printf("Ingresa el primer nombre:\n-");
    getchar();
    fgets(NombreCompleto, sizeof(NombreCompleto), stdin);
    NombreCompleto[strcspn(NombreCompleto, "\n")]=0;
    printf("Ingresa el segundo nombre:\n-");
    fgets(NombreCompleto2, sizeof(NombreCompleto2), stdin);
    NombreCompleto2[strcspn(NombreCompleto2, "\n")]=0;
    printf("\n//////////////////////////////////\n");
    if(strcmp(NombreCompleto, NombreCompleto2)==0)
    {
        printf("Los dos nombres son iguales");
    }
    else
    {
        printf("Los dos nombres son Diferentes");

    }
    printf("\n\n//////////////////////////////////\n");
    printf("Escribe enter para continuar.");
    getchar();
    system("cls");

}

void CopiarCadena(const int TAMANO)
{
    char Original[TAMANO];
    char Copia[TAMANO];
    printf(" En esta opcion copiaras un nombre\n a otra variable con strcpy.");
    printf("\n//////////////////////////////////\n");
    printf("Ingresa un nombre:\n-");
    getchar();
    fgets(Original, sizeof(Original), stdin);
    Original[strcspn(Original, "\n")]=0;
    strcpy(Copia, Original);
    printf("\n//////////////////////////////////\n");
    printf("Original: %s\n", Original);
    printf("Copia:    %s\n", Copia);
    printf("\n//////////////////////////////////\n");
    printf("Escribe enter para continuar.");
    getchar();
    system("cls");
}

int main()
{
    const int TAMANO=100;
    char Opcion;
    do
    {
        Opcion=MostrarMenu();
        switch(Opcion)
        {
        case 'a':
        case 'A':
        {
            LeerNombreSinEspacios(TAMANO);
            break;
        }
        case 'b':
        case 'B':
        {
            LeerNombreConEspacios(TAMANO);
            break;
        }
        case 'c':
        case 'C':
        {
            ArregloDeIntegrantes(TAMANO);
            break;
        }
        case 'd':
        case 'D':
        {
            LongitudDeCadena(TAMANO);
            break;
        }
        case 'e':
        case 'E':
        {
            ConcatenarCadenas(TAMANO);
            break;
        }
        case 'f':
        case 'F':
        {
            CompararCadenas(TAMANO);
            break;
        }
        case 'g':
        case 'G':
        {
            CopiarCadena(TAMANO);
            break;
        }
                case 'h':
        case 'H':
        {
            printf("Vuelva Pronto!\n");
            printf("//////////////////////////////////\n\n");
            break;
        }

        default:
            {
            printf("Ingresa una opcion valida.\n");
            printf("//////////////////////////////////\n\n");
            printf("Escribe enter para continuar.");
            getchar();
            getchar();
            system("cls");
            break;
            }
        }
    }
    while(Opcion != 'h' && Opcion != 'H');
    return 0;
}

