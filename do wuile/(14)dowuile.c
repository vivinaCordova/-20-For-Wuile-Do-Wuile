// 14 suma de los cuadrados de los primero n numeros
#include<stdio.h>
int main(){
    int n, i=1, r=0;
    printf("la sumar los cuadrados hasta n\ningrese un numero: ");
    scanf("%d", &n);
    //la variable r suma y actualiza el valor de la multiplicacion de el valor de la variable y ñpor si misma 
    //precenta la serie con la variable i
    //y la suma con la variable r
    do{
        //imprime la serie
        printf("%d + ", i);
        r+= i*i;
        i++;
    }while(i<=n);
    //imprime el valor final 
    printf("\n=%d",r);
    return 0;
}
