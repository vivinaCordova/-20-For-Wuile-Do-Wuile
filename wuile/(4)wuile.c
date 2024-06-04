// 4 radicacion mediante restas sucesivas 
#include <stdio.h>
int main() {
    // n es el valor ingresado por el usuario
    // r es una variable que almacena y expotara la radicion 
    int n
    int r = 0;
    printf("Ingrese el número: ");
    scanf("%d", &n);
     //el wuile esta condicionado para que n sea mayor o igual a 0, y la variable r se actuatilizara(aumentando)
    //el almacera la resta de i multiplicado 3 veses 
    //con un aumento de r
    //i++: la actualizacion hara una disminucion hasta que la condicion de wuile se cumpla 
    while (n >= 0) {
        n -= (r * r * r);
        r++;
    }
    //decrese por que es una suma
    r--;
    printf("%d", r);
    return 0;
}

