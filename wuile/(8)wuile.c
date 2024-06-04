//8 producto de una serie geometrica
#include<stdio.h>
int main (){
    //
    int a, r=2, n=2, mul=1;
    printf("producto de una serie geometrica desde 2 con razon 2\ningrese los terminos que desea multiplicar: ");
    scanf("%d", &a);
    for(int i=n; i <= a; i++){
        //se define la variable m , 
        //que almacenara la suma de 1 mas i y se actualizara conformese cumpla la condicion 
        mul*=i;
        //la variable mul multiplica y almacenara el valor de multiplicaion, de m 
        //imprimira mul que es la multiplicacion de todos los valores multiplicasdos por la razon
        printf("%d ", i);
    }
    printf("\n%d", mul);
    return 0;
}
