// 17 producto de una serie de numeros fraccionarios
#include <stdio.h>
int main() {
    int n, r = 1, mul = 1;
    printf("Producto de números fraccionarios\nIngrese un número: ");
    scanf("%d", &n);
    printf("%d ", r);
    int i = 1;
    //el do wuile parte desde el i con un valor de uno hasta n con el valor que el usuario ingresa
    //la variable mul actualiza la multiplicacion de la variable i por 1
    //hasta que se complete la condicon de for
    //en la funcion printh se imprime con 1/ para que el numerador sea constante 
    //se multitiplica i * i para que el digito ingresado por el usuario sean correcta 
    //i imprime la serie
    // mul imprime el producto de la serie de fracciones 
    do {
        mul *= i;
        printf("* 1/%d", i);
        i++;
    } while (i < n);
    printf(" = 1/%d", mul);
    return 0;
}
