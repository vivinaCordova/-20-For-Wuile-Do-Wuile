//16 suma de una serie de numeros fracionarios
#include<stdio.h>
int main(){
    int n, i=1, sum=0;
    printf("ingrese numero ");
    scanf("%d", &n);
    //el bucle esta condicionado con la variable i con  valor de 1 hasta
    //n que es el valor que ingresa el usuario 
    //sum, suma y actualiza el valor de i 
    //el motivo por el que se le aumenta el uno a la variable 
    //la serie se imprime con  sum
    while (i<=n){
        printf("1/%d + ", i);
        sum+=i;
        i++;
    }
    printf("\n= 1/%d", sum);
    return 0;
}
