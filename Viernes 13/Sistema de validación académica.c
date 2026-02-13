#include <stdio.h>


int main()
{
    int Edad, MateriasR;
    float Promedio;
    printf("Cual es tu edad: ");
    scanf("%d", &Edad);
    printf("Cual es tu Promedio respecto a 100: ");
    scanf("%f", &Promedio);
    printf("Cuantas materias reprobadas tienes: ");
    scanf("%d", &MateriasR);
    if(Promedio>=90&&MateriasR==0&&Edad>=18)
    {
        printf("\nobtienes la beca\n");
    }
    else if(MateriasR>0&&MateriasR<=2)
    {
        printf("\nno obtienes la beca\n");
        printf("Puedes reiscribirte\n");
    }
    else if(MateriasR>=3)
    {
        printf("\nno obtienes la beca\n");

        printf("Estas en situacion critica\n");
    }

    return 0;
}
