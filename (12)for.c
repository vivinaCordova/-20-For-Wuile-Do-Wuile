// 12 Sumar números impares hasta n
#include<stdio.h>
int main(){
    int n, sum=0;
    printf ("serie que suma numeros impares\ningrese un numero:");
    scanf("%d", &n);
    //la condcion de for prate desde el 1 hasta el valor ingresado por el usuario
    // con una actualizacion o aumento de 2, dando solo numero impares
    //la variable sum, suma la variable j , y actualiza, almacenando todo los valores
    //y almacena el total de la suma de los numeros
        for (int j=1;j<=n; j+=2){
        sum+=j;} printf("%d\n", sum);
    return 0;
}

