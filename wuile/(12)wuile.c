// 12 sumar los numeros imapares hasta  de n 
#include<stdio.h>
int main(){
    int n, i=1, sum=0;
    printf("ingrese numero ");
    scanf("%d", &n);
    //la condcion de wuile parte desde el 1 hasta el valor ingresado por el usuario
    // con una actualizacion o aumento de 2, dando solo numero impares
    //la variable sum, suma la variable j , y actualiza, almacenando todo los valores
    //y almacena el total de la suma de los numeros
    while (i<=n){
        printf("%d ", i);
        sum+=i;
        i+=2;
    }
    printf("\n %d", sum);
    return 0;
}
