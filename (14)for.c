// 14	Suma de los cuadrados de los primeros n números
#include<stdio.h>
int main (){
    int a, r=0;
    printf("potencia mediante sumas sucesivas\ningrese: ");
    scanf(" %d",&a);
    //la variable r suma y actualiza el valor de la multiplicacion de el valor de la variable y ñpor si misma 
    //precenta la serie con la variable i
    //y la suma con la variable r

    for (int i = 1; i <= a;i++){
        r+= i*i;
        printf("%d^2  ", i);
    }
    printf("=  %d", r);
    return 0;
}
