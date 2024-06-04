// 7 suma de una serie aritmetica 
#include <stdio.h>
int main (){
    //n variable ingresada por el usuario 
    //i variable para la condion, que se define fuera del comando 
    //sum es la suma de la serie 
    int n, i=1,sum=0 ;
    printf("ingrese un numero ");
    scanf("%d", &n);
    //wuile se condiciona por que n tiene que ser igual a i 
    //imprimo la serie
    //sum es una actualizacion de la suma a i
    //con una actualisacion
    //imprimo la suma, fuera del comando 
    while(i<=n){
        printf("%d ",i);
        sum+=i;
        i++;
    }
    printf(" %d", sum);
    return 0;
}

