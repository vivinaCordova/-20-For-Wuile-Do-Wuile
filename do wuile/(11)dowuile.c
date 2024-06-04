// 11 MCD
#include <stdio.h>
int main() {
    int a, b, mcd;
    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);
    //el comando do wuile tiene la unica condicion de que el segundo termino no sea igual de 0
    // se define otra variable t, la cual toma la variable b y la almacena
    // b es igualel residuo de a y b 
    // a toma y almacena la variable t
    // hasta que se cumpla la condicion de for
    do {
        int t = b;
        b = a % b;
        a = t;
    } while (b != 0);
    mcd = a;
    printf("El Máximo Común Divisor (MCD) es: %d\n", mcd);
    return 0;
}