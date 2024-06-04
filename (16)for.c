// 16	Suma de una serie de números fraccionarios 
#include<stdio.h>
int main(){
    int n, r=1, sum=1;
    printf("suma de numeros fraccionarios\ningrese numero: ");
    scanf("%d", &n);
    printf("%d ", r);
    //el bucle esta condicionado con la variable i con  valor de 1 hasta
    //n que es el valor que ingresa el usuario 
    //sum, suma y actualiza el valor de i 
    //el motivo por el que se le aumenta el uno a la variable 
    //la serie se imprime con  sum
    for(int i=1; i<n; i++){
        sum += i+1;
        printf("+ 1/%d  ", i);
    }
    printf("= 1/%d", sum );
    return 0;
}
