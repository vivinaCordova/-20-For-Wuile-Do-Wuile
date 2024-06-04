
// 11 el maximo comun divisor 
#include <stdio.h>
int main() {
    //se solicitara al usuario ingresar dos numeros
    //el primer termino se almacenara en a
    //el segundo termino se alamcenara en b
    int a, b, mcd;
    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);
     //el comando wuile tiene la unica condicion de que el segundo termino no sea igual de 0
    // se define otra variable t, la cual toma la variable b y la almacena
    // b es igualel residuo de a y b 
    // a toma y almacena la variable t
    // hasta que se cumpla la condicion de for
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    mcd = a;
    printf("El Máximo Común Divisor (MCD) es: %d\n", mcd);
    return 0;
}
