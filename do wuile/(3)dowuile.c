// 3 potencia mediante sumas sucesivas
#include<stdio.h>
int main(){
    int a,b, i=1, r=1;
    printf("ingrese dos numero\nbase, espacio y exponente ");
    scanf("%d %d", &a, &b);
    do{
        printf("%d + ", i);
        //la variable r , va a multiplicar el segundo numero ingresado por el usuario
        //y esta almacenara el valor para precentarlo cuando la condicion sea falsa
        //esta variable sera a que precentara la potencia total
        //en esta es la respeticion de cuantas veses se multiplicara el a
        r=r*a;
        i++;
    }while(i<= b);
    printf("\nel potencia de %d a la %d es %d",a,b, r);
    return 0;
}
