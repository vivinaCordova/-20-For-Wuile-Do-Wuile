// 6 Factorial de un numero 
#include<stdio.h>
int main(){
    //la variable n es el valor que ingresa el usuario por pantalla
    // defino la variable i antes
    // la fariable f que incia con uno, pero almacenara el factorial
    int n,i,f=1;
    printf("Factorial de un número\ningrese un numero:");
    scanf("%d",&n);
    //la variable i parte desde el 1 hasta que sea igual a el numero ingresado por el usuario
    //actualizandose hasta i igual a n 
    //f multiplica por i y se le  asiga el valor de la multiplicacion de i
    for(i=1;i<=n;i++){
        f*=i;
    }
    //imprime en pantalla el valor final 
     printf("%d\n",f);
     return 0;
}
