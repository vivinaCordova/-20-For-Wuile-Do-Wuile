// 19 Calcular en n-esimo numero triangular
#include <stdio.h>
int main(){
    int n, r=1, sum=1;
    printf( "calcular el n-esimo numero triangular\ningrese n: ");
    scanf("%d", &n);
    //esto imprime para que la serie comienza desde 1, puesto que r es igual a 1
    printf("%d ", r);
    //for parte dede la variable i con valor de 1, hasta el valor que el usuario ingrese
    //se imprime i para la serie, pero sumando 1, un arreglo para imprimir la serie correctamente en pantallas
    //sum, actualiza y almacenal la suma de i mas 1, dentro le variable 
    //i exporta la serie
    //sum, es la suma de la serie 

    for(int i =1; i<n; i++){
        printf("+ %d ", i+1);
        sum+=i+1;
    }
   printf("= %d", sum);
    return 0;
}
