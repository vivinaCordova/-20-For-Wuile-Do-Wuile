//3 potencia por sumas sucesivas
#include<stdio.h>
int main(){
    //dos varible a y b que almacenaran el valor que ingresa el usuario
    //a base y b exponente, mientra r en  la cual se almacenara la suma total o potencia total
    //se declara  la variable i fuera de el comando 
    int a,b,i, r=1;
    printf("ingrese numer\ningrese base, espacio y exponente ");
    scanf("%d %d", &a, &b);
    //el bucle wuile tiene la condicion de que mientra y sea menor que b el prorama continua 
    // en wuile el aumente nose encuentra en la condicion
    while (i<b){
        i++;
        //la variable r , va a multiplicar el segundo numero ingresado por el usuario
        //y esta almacenara el valor para precentarlo cuando la condicion sea falsa
        //esta variable sera a que precentara la potencia total
        //en esta es la respeticion de cuantas veses se multiplicara el a
        r=r*a;
    }
    //precenta en pantalla r 
    printf("\n=%d", r);
    return 0;
}
