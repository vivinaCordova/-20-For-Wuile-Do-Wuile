// 18 contador de numeros primos
#include <stdio.h>
int main() {
    //n es el valor ingresado por el usuario 
    //cont, que contara  los valores parte de 1
    //en el bucle do wuile, la variable se siempre se define aparte
    int n, cont = 1, i = 2, r=1 ;
    printf("Contador de números primos\nIngrese el número ");
    scanf("%d", &n);
    printf("%d ", r);
    do {
        //p es el que calcula si un numero es primo 
        //aplicamos otra variable como j
        int j = 2, p = 1;
        do {
            if (i % j == 0) {
                p = 0;
            }
            j++;
        } while (j <= i / 2 && p == 1);
        //mientras i dividido entre dos y p igual a 1, el bucle continuara
        //si la condcion resulta ser falsa el bucle acabara
        //si el comandpo if cumple con la condicion de que p es igual a 1 el contador sumara 1 
        if (p == 1) {
            printf("%d ", i);
            cont++;
        }
        i++;
    } while (i < n);
    //mientras i sea menor que n es bucle continuara, hasta que la condicoon sea falsa
    printf("\nHay %d números primos.", cont);
    return 0;
}