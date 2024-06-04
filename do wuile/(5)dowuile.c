//5 serie fibonacci
#include <stdio.h>
int main() {
    //n es la variable ingresada por el usuario
    //a es un valor ya dederminado con 0
    //b es un valor ya determinado con 1
    //i, en el bucle do wuile la variable simepre se la define antes 
    int n, a=0, b=1,i=2, c;
    printf("serie fibonacci\ningrese numero:");
    scanf("%d", &n);
    //con la funcion printf se mostrara en pantalla el el incio de la serie 0 y 1
    //por ello la serie parte de dos , ademas de que se necesita para sumar los valores 
    printf("%d %d ",a,b);
    do{
        //la variable c almacena la suma de a y b
        //por cada vuelta el avlor cambia
        //el comado if, determina que si i es menor que n - 1
        //la variable a obtendra el valor de y la variable b obtendra el avlor de c
        c=a+b;
        printf("%d ", c);
        if(i<n-1);{
            a=b;
            b=c;
        }
        //la actualizacion por cada vuelta
        i++;
    }while(i<n);
    //mientra el la variable i sea menor que , el bucle continuaara por el contrario acabara
    //mientras la condicion sea verdadera funcionara 
    return 0;
}