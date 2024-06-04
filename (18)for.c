//18	Contar los números primos hasta n
#include <stdio.h>
int main() {
    //n es el valor ingresado por el usuario 
    //cont, que contara  los valores parte de 1
    int n, cont = 0;
    printf("contador de numeros primos\ningrese el numero que desea contar: ");
    scanf("%d", &n);
    //se define a la variable i como entero y se le asigan a el valor de 2
    //la condicion de for, determiena que mientras i sea menor que n, el bucle continuara
    //si la condicion resulta falsa el bucle finalizara
    //y con actualizacion
    for (int i= 2; i < n; i++) {
        //se define como p como entero y la variable es la que almacena los numeros primos patrtiendo desde 1
        int p = 1;
        //se define la variable j como entero y se le asigna el valor de dos 
        //el bucle simpre se cumplira siemore y cuando sea menor o igual a la divicoon de 2 a i  y si p es igual a 1
        //si la condicion resulta falsa el bucle finaliza 
        for (int j = 2; j <= i / 2 && p == 1; j++) {
            //el comando si, tiene la condicion que mientras el residuo de i y j es o 
            //p igual a o
            if (i % j == 0) {
                p = 0;
            }
        }
        //el comando if, tiene la condicion que mientras p sea igual a 1, se imprimira en pantalla i
        //y el contador aumentara 
        if (p == 1) {
            printf("%d ", i);
            cont++;
        }
    }
    //imprimira en pantalla  el contador
     printf("\nhay %d numeros primos ", cont);
    return 0;

}
