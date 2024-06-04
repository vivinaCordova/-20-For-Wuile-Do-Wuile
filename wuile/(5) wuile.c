// 5 serie fibonacion
#include<stdio.h>
int main (){
    //n es el valor ingresado por el usuario
    //a definida con un valor 0
    //b definida con una valor de 1
    //i se la define fuera de el bucle, y se le asigna con el valor de 2
    int n, a=0, b=1, c, i=2;
    printf("serie fibonacci\ningrese numero:");
    scanf("%d", &n);
    //imprime en pantalla el inicio de la serie pues de ahi parte la serie
    printf("%d %d ",a,b);
    //el bucle esta condicionado, mientras i sea menor que n
    //el bucle cabara siempre y cuando la condicon sea falsa 
    while (i<n){
        //c almacena la suma de a y b
        //y imprime en pantalla
        c=a+b;
        printf("%d ", c);
        //el comando if, esta condicionada de modo que i sea menor que n menos uno

        if (i<n-1){
            a=b;
            b=c;
        }
        //finalmente la actualizacion
         i++;
    }
    return 0;
}
