// 13  sumar pares hasta n
#include<stdio.h>
int main(){
    int n, i=2, sum=0;
    printf("la sumar los numeros pares hasta n\ningrese un numero: ");
    scanf("%d", &n);
    //la variable r suma y actualiza el valor de la multiplicacion de el valor de la variable y ñpor si misma 
    //precenta la serie con la variable i
    //y la suma con la variable r
    do{
        //imprime la serie
        printf("%d + ", i);
        sum+=i;
        i+=2;
    }while(i<=n);
    //mientras la variable n sea igual o mayor a i la condicon sera verdadera y el bucle continuara
    //si el bucle se acabara
    //imprime la suma total 
    printf("\n%d", sum);
    return 0;
}
