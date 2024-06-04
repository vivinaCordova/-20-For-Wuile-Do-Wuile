// 16 suma de una serie de numero fraccionarios
#include <stdio.h>
int main() {
    int n, i=1, r = 1, sum = 1;
    printf("Suma de números fraccionarios\nIngrese un número: ");
    scanf("%d", &n);
    printf("%d ", r);
    //el bucle esta condicionado con la variable i con  valor de 1 hasta
    //n que es el valor que ingresa el usuario 
    //sum, suma y actualiza el valor de i 
    //el motivo por el que se le aumenta el uno a la variable 
    //la serie se imprime con  sum
    do {
        sum += i + 1;
        //precentara la serie
        printf("+ 1/%d  ", i + 1);
        i++;
    } while (i < n);
    //precentara en patalla la suma total 
    printf("= 1/%d", sum);
    return 0;
}
