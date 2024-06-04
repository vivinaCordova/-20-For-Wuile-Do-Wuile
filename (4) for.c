//	4 Radicación mediante restas sucesivas 
#include <stdio.h>
int main() {
    // n es el valor ingresado por el usuario
    // r es una variable que almacena y expotara la radicion 
    int n, i;
    printf("Ingrese el numero: ");
    scanf("%d", &n);
    //el for esta condicionado para que n sea mayor o igual a 0, y la variable r se actuatilizara(aumentando)
    //el almacera la resta de i multiplicado 3 veses 
    //i++: la actualizacion hara una disminucion hasta que la condicion de for se cumpla 
    for (;n >= 0; i++) {
        n -= ( i* i * i);
    }
    i--;
    printf("%d", i);
    return 0;
}