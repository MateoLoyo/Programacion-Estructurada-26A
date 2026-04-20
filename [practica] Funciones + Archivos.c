#include <stdio.h>

void capturar(int v[], int n);
void mostrar(int v[], int n);
int filtrar(int origen[], int destino[], int n);

void capturar(int v[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Ingresa el elemento %d: ", i);
        scanf("%d", &v[i]);
    }
}

void mostrar(int v[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int filtrar(int origen[], int destino[], int n)
{
    int i;
    int tam = 0;

    for(i = 0; i < n; i++)
    {
        if(origen[i] % 2 != 0 && origen[i] % 3 != 0 && origen[i] <= 10)
        {
            destino[tam] = origen[i];
            tam++;
        }
    }

    return tam;
}

int main()
{
    int v[6];
    int resultado[6];
    int n;
    int i;
    FILE *f;

    capturar(v, 6);

    printf("\nArreglo original: \n");
    mostrar(v, 6);

    n = filtrar(v, resultado, 6);

    printf("Arreglo filtrado: \n");
    mostrar(resultado, n);

    f = fopen("resultado.txt", "w");

    for(i = 0; i < n; i++)
    {
        fprintf(f, "%d ", resultado[i]);
    }

    fclose(f);

    return 0;
}
