// 8 producto de una serie geomatrica 
#include <stdio.h>
int main() {
    int n, mul = 1, m = 1;
    printf("Producto de una serie geométrica\n");
    printf("Ingrese la cantidad de términos de la serie que desea multiplicar: ");
    scanf("%d", &n);
    printf("%d ", m);
    int i = 1;
    do {
        int m = 1 + i;
        //se define la variable m , 
        //que almacenara la suma de 1 mas i y se actualizara conformese cumpla la condicion 
        mul *= m;
        //la variable mul multiplica y almacenara el valor de multiplicaion, de m 
        //imprimira mul que es la multiplicacion de todos los valores multiplicasdos por la razon
        printf("%d ", i + 1);
        i++;
    } while (i < n);
    printf("\nEl producto de los términos es: %d", mul);
    return 0;
}
