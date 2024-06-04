// 15 suma del cubos de los primeros n numeros 
#include<stdio.h>
int main(){
    int n, i=1, r=0;
    printf("la sumar los cuadrados hasta n\ningrese un numero: ");
    scanf("%d", &n);
    //el bucle esta condicionado con la variable i igual 1 hasta el valor ingresado por el usuario 
    //la variable se suma y se actualizara, 
    //la variable r almacena la multiplicacion i multiplicada 3 veses
    //la serie se precenta con i
    //la suma de la seie se precenta con r
    do{
        //imprime serie 
        printf("%d + ", i);
        r+= i*i*i;
        i++;
    }while(i<=n);
    //mientra la condicion sea verdadera el bucle continuara
    //imprime el valor final 
    printf("\n=%d",r);
    return 0;
}