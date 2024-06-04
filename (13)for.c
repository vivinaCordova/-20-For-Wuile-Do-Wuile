// 13	Sumar números pares hasta n
#include<stdio.h>
int main(){
    int n, sum=0;
    printf ("serie que suma numeros impares\ningrese un numero:");
    scanf("%d", &n);
    //el comando while parte deje la variable j con un valor incial de 2 hasta el valor ingreso por el usuario n
    // con un aumento suma y actualizacion de 2, para obtner numeros pares
    // sum, precenta la suma de los numeros pares
        for (int j=2; j<=n;j+=2){
            sum+=j;
        }
         printf("%d",sum);
    return 0;
}
