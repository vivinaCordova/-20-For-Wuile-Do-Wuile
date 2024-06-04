// 6 el factorial de n numero 
#include<stdio.h>
int main(){
    //n como valor ingresado por el usuario
    //i, se define la variable fuera de el bucle
    //f es la que almacenara el valor factorial, partiendo con el valor de 1
    int n, i=1, f=1;
    printf("el factorial de un numero n\ningrese un numero: ");
    scanf("%d", &n);
    //se imprime en pantalla el valor de i 
    // y fe se actualiza la multiplicando i
    //fa almacena el alor para la suigiente vuelta 
    do{
        printf("%d * ", i);
        f*=i;
        i++;
    }while(i<=n);
    //mientra i sea menor o igual a n , la variable f almacenara el numero 
    //si la condicon es falsa el bucle se acabara 
    //imprime en pantalla el valor factorial de un numero
    printf("\nel factorial de %d es %d",n, f);
    return 0;
}
