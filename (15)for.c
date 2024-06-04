//15	Suma del cubo de n números 
#include<stdio.h>
int main (){
    int a, r=0;
    printf("potencia mediante sumas sucesivas\ningrese: ");
    scanf(" %d",&a);
    //el bucle esta condicionado con la variable i igual 1 hasta el valor ingresado por el usuario 
    //la variable se suma y se actualizara, 
    //la variable r almacena la multiplicacion i multiplicada 3 veses
    //la serie se precenta con i
    //la suma de la seie se precenta con r
    for (int i = 1; i <= a;i++){
        r+= i*i*i;
        printf("%d^2  ", i);
    }
    printf("=  %d", r);
    return 0;
}
