// 2 el inverso de un numero 
#include <stdio.h>
int main() {
    //la variable n, almacena el valor que ingresara el usuario
    // i se declara fuera del comando 
    //se define a la variable i, d es variable de almacenamiento
    int n, i = 0, d;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    //el comando for esta condicionado para que n,sea diferente de 0
    //la variable d almacena el residuo de la valiable n dividido entre 10;
    //la variable i almacena la multiplicacion de i por 10 + d
    while (n != 0) {
        d = n % 10;
        i = i* 10 + d;
        n /= 10;
    }//printf muestra en pantalla la variable i 
    printf("El inverso del número es: %d\n", i);
    return 0;
}
