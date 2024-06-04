//13 sumar los numeros pares hasta n
#include<stdio.h>
int main(){
    int n, i=2, sum=0;
    printf("ingrese numero ");
    scanf("%d", &n);
     //el comando wuile tiene la  parte deje la variable i con un valor incial de 2 hasta el valor ingreso por el usuario n
    // con un aumento suma y actualizacion de 2, para obtner numeros pares
    // sum, precenta la suma de los numeros pares
    while (i<=n){
        printf("%d ", i);
        sum+=i;
        i+=2;
    }
    printf("\n%d", sum);
    return 0;
}
