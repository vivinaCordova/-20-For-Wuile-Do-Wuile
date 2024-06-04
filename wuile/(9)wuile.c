//9 numero de digitos de un numero 
#include <stdio.h>
int main() {
    int n, c = 0;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    //la condicion de for es mientra n sea diferente de 0
    //asignara a n y la divicion de n entre y 10 
    //con una actualizacion o aumento 
    while (n != 0) {
        n /= 10;
        c++;
    }
    printf("El número tiene %d dígitos.\n", c);
    return 0;
}
