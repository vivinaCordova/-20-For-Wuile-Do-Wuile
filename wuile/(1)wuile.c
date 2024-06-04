// 1 suma de los digitos de un numero
#include <stdio.h>
int main() {
    //la variable n, almacena el valor, y la variable suma parte desde 0
    // con for avance la variable sum almacera ese valor
    int n=12567, sum=0;
    printf("la suma de %d\n", n);
   //wuile tiene la condicionn de que mientras n sea diferente de cero el bucle continuara 
   //la actualizacion de la variable sum mas el residua de n y 10 
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    // se imprime sum en pantalla 
    //es decir precenta la suma
    printf("%d\n", sum);
    return 0;
}


