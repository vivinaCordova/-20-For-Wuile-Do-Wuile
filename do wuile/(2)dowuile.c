// 2 el inverso de el numero 
#include <stdio.h>
int main() {
    int n, i = 0, d;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    //el comando do wuile esta condicionado para que n,sea diferente de 0
    //la variable d almacena el residuo de la valiable n dividido entre 10;
    //la variable i almacena la multiplicacion de i por 10 + d
    do{
        d = n % 10;
        i = i* 10 + d;
        n /= 10;
     } while (n != 0); 
    printf("El inverso del número es: %d\n", i);
    return 0;
}
