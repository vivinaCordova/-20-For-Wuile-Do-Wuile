// 4 radicacion mediante restas sucesivas 
#include <stdio.h>
int main() {
    int n;
    int r = 0;
    printf("Ingrese el número: ");
    scanf("%d", &n);
    do {
        n -= (r * r * r);
         //el do wuile  esta condicionado para que n sea mayor o igual a 0, y la variable r se actuatilizara(aumentando)
    //el almacera la resta de i multiplicado 3 veses 
    //con un aumento de r
    //i++: la actualizacion hara una disminucion hasta que la condicion de wuile se cumpla 
        r++;
    } while (n >= 0);
    r--;
    printf("%d", r);
    return 0;
}
