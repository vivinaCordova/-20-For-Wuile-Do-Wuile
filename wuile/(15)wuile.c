//15 suma de los cubos de los primeros n numeros 
#include<stdio.h>
int main (){
    int n,i=1, r=0;
    printf("potencia mediante sumas sucesivas\ningrese: ");
    scanf(" %d",&n);
    //el bucle esta condicionado con la variable i igual 1 hasta el valor ingresado por el usuario 
    //la variable se suma y se actualizara, 
    //la variable r almacena la multiplicacion i multiplicada 3 veses
    //la serie se precenta con i
    //la suma de la seie se precenta con r
    while (i <= n){
        printf("%d^3  ",i);
        r+= i*i*i;
        i++;
    }
    printf("=  %d", r);
    return 0;
}
