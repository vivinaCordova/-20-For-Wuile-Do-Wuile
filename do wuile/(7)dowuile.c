// 7 la suma de una serie aritmetica 
#include<stdio.h>
int main(){
    int n, i=1, sum=0;
    printf("la suma de n numeros de serie aritmatica\ningrese un numero: ");
    scanf("%d", &n);
    //wuile se condiciona por que n tiene que ser igual a i 
    //imprimo la serie
    //sum es una actualizacion de la suma a i
    //con una actualisacion
    //imprimo la suma, fuera del comando 
    do{
        printf("%d + ", i);
        sum+=i;
        i++;
    }while(i<=n);
    printf("\n%d", sum);
    return 0;
}
