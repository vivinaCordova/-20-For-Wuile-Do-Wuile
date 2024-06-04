// 1 suma de los digitos de el numero 
#include <stdio.h>
int main() {
       //la variable n, almacena el valor, y la variable suma parte desde 0
    // con do whuile  avance la variable sum almacera ese valor
    int n=12567,i=1, sum=0;
    printf("la suma de %d\n", n);
    //do wuile  tiene la condicionn de que n es difernte de cero
   //la actualizacion de la variable sum mas el residua de n y 10 
   // se imprime sum en pantalla 
    do{
        sum += n % 10;
        n /= 10;
       }while (n != 0);
    printf("%d\n", sum);
    return 0;
}
