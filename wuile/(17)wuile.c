
//17 produto de una serie de numeros fraccionarios 
#include<stdio.h>
int main(){
    int n, i=1, mul=1, r=1;
    printf("ingrese numero ");
    scanf("%d", &n);
    printf("%d * ", r);
    //el wuiñe parte desde el i con un valor de uno hasta n con el valor que el usuario ingresa
    //la variable mul actualiza la multiplicacion de la variable i por 1
    //hasta que se complete la condicon de for
    //en la funcion printh se imprime con 1/ para que el numerador sea constante 
    //se multitiplica i * i para que el digito ingresado por el usuario sean correcta 
    //i imprime la serie
    // mul imprime el producto de la serie de fracciones 
    while (i<=n){
        printf("1/%d * ", i);
        mul*=i;
        i++;
    }
    printf("\n= 1/%d", mul);
    return 0;
}
