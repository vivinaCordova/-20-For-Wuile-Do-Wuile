// 7 Suma de una serie aritmética 
#include <stdio.h>
int main() {
    // n, son los digitos que desea el usurio que sean sumados
    // c, es la raxzon de la serie;
    // r almacena el aumento he imprimar el valor de la serie
    // s es la suma de total de la serie 
    int n, c=2,r=1, s=0;
    printf("la serie aritmetica %d \n", c);
    printf("ingrese de numero para la suma de la serie:");
    scanf("%d", &n);
    //imprimira el la variable en pantalla para que la serie parte ddes el valor que esta asignada la variable
    printf("%d ", r);
    for(int i =1; i<n; i++){
        // se suma r + c y r se actualiza con el valor de la suma
        r+=c;
        // se suma s+r y s almacenara  y actualiza el valor de la suma y imprimira el valor en pantalla
        s+=r;
        printf("%d ",r);
    }
    printf("\nla suma de la srie aritmetica es:%d",s+1);

    return 0;
}





