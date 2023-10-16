#include <stdio.h>
int main(void){
int numero;
int i;
int suma=0;

    printf("Ingrese el numero entero:\n");
    scanf("%d\n", &numero);
    for (i=1; i <= numero; i++)
    {
        suma=suma+i;
    }
    
printf("la sumatoria es:%d\n", suma);

    return 0;
}