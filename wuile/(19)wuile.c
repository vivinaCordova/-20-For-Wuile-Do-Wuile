//19 calcular el n-esimo numero trianguanlar
#include<stdio.h>
int main (){
    int n,i=1, sum=0;
    printf("potencia mediante sumas sucesivas\ningrese: ");
    scanf(" %d",&n);
     //dowuile  parte dede la variable i con valor de 1, hasta el valor que el usuario ingrese
    //se imprime i para la serie, pero sumando 1, un arreglo para imprimir la serie correctamente en pantallas
    //sum, actualiza y almacenal la suma de i mas 1, dentro le variable 
    //i exporta la serie
    //sum, es la suma de la serie 

    while (i <= n){
        printf("%d + ",i);
        sum+=i;
        i++;
    }
    printf("\n%d",sum);
    return 0;
}
