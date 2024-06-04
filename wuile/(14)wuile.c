//14 suma de los cuadrados de los primeros n numeros 
#include<stdio.h>
int main (){
    int n,i=1, r=0;
    printf("potencia mediante sumas sucesivas\ningrese: ");
    scanf(" %d",&n);
    //la variable r suma y actualiza el valor de la multiplicacion de el valor de la variable y ñpor si misma 
    //precenta la serie con la variable i
    //y la suma con la variable r

    while (i <= n){
        printf("%d^2  ",i);
        r+= i*i;
        i++;
    }
    printf("=  %d", r);
    return 0;
}
