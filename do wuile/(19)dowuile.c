// 19 calcular el enesimos numero de n
#include<stdio.h>
int main(){
    int n, i=1, sum=0;
    printf("la sumar de el n-enesimo,\ningrese un numero: ");
    scanf("%d", &n);
    //do wuile  parte dede la variable i con valor de 1, hasta el valor que el usuario ingrese
    //se imprime i para la serie, pero sumando 1, un arreglo para imprimir la serie correctamente en pantallas
    //sum, actualiza y almacenal la suma de i mas 1, dentro le variable 
    //i exporta la serie
    //sum, es la suma de la serie 
    do{
        printf("%d ", i);
        sum+=i;
        i++;
    }while(i<=n);
    printf("= %d", sum);
    return 0;
}
