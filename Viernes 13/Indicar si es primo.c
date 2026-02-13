#include <stdio.h>


int main()
{
int Numero, i;
    printf("Ingresa tu numero entero: ");
    scanf("%d", &Numero);
if(Numero<=1){
    printf("No es primo");
}
else{
    for(i=2; i>Numero; i++){
        if (Numero%i == 0){
                printf("No es primo");
return 0;
        }
    }
                    printf("es primo");

}
return 0;
}
