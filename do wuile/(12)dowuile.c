//12  sumar los imapares hasta n
#include<stdio.h>
int main(){
    int n, i=1, sum=0;
    printf("la sumar los impares hasta n\ningrese un numero: ");
    scanf("%d", &n);
    //la condcion de do wuile parte desde el 1 hasta el valor ingresado por el usuario
    // con una actualizacion o aumento de 2, dando solo numero impares
    //la variable sum, suma la variable j , y actualiza, almacenando todo los valores
    //y almacena el total de la suma de los numeros
    do{
        printf("%d + ", i);
        sum+=i;
        i+=2;
         //el comando do wuile tiene la  parte deje la variable i con un valor incial de 2 hasta el valor ingreso por el usuario n
    // con un aumento suma y actualizacion de 2, para obtner numeros pares
    // sum, precenta la suma de los numeros pares
    }while(i<=n);
    printf("\n%d", sum);
    return 0;
}
