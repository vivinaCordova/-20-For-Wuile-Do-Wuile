//17	Producto de una serie de números fraccionarios 
#include<stdio.h>
int main(){
    int n, r=1, mul=1;
    printf("suma de numeros fraccionarios\ningrese numero: ");
    scanf("%d", &n);
    printf("%d ", r);
    // el for parte desde el i con un valor de uno hasta n con el valor que el usuario ingresa
    //la variable mul actualiza la multiplicacion de la variable i por 1
    //hasta que se complete la condicon de for
    //en la funcion printh se imprime con 1/ para que el numerador sea constante 
    //se multitiplica i * i para que el digito ingresado por el usuario sean correcta 
    //i imprime la serie
    // mul imprime el producto de la serie de fracciones 
    for(int i=1; i<n; i++){
        mul *= i*1;
        printf("* 1/%d", i*1 );
    }
    printf(" = 1/%d", mul );
    return 0;
}
