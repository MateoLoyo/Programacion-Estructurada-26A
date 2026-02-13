#include <stdio.h>
int main()
{
    int Promedio, MateriasR;
    printf("Cual es tu promedio (respecto a 100): ");
    scanf("%d", &Promedio);
    printf("\nCuantas materias has reprobado: ");
    scanf("%d", &MateriasR);
    if(Promedio>=85&&MateriasR==0)
    {
        printf("\nobtienes la beca\n");
    }
    else
    {
        printf("\nno obtienes la beca\n");
    }
    return 0;
}
