// 8 Producto de una serie geométrica 
//para la serie geometricas, necesita tres condiciones,
//desde el termino que parte(2)
// la razon es igual a el numero poir el cual se sumar ara serie(1)
// tres la cantidad de numero que sea sumar 
#include <stdio.h>
int main() {
    int n, mul=1, m=1;
    printf("producto de una serie geometrica\n");
    printf("ingrese digitos de los numeros que desea suma:");
    scanf("%d", &n);
    printf("%d ", m);
    for (int i = 1;i<n; i++) {
    //se define la variable m , que almacenara la suma de 1 mas i y se actualizara conformese cumpla la condicion 
        int m=1+i;
    //la variable mul multiplica y almacenara el valor de multiplicaion, de m 
    //imprimira mul que es la multiplicacion de todos los valores multiplicasdos por la razon
        mul*=m;
        //precentara la serie
        printf("%d ",i+1);
    }
    //precentara la suma de los n numeros que desa sumar de la serie
    printf("\nla suma de los digitos es: %d", mul);
    return 0;
}
