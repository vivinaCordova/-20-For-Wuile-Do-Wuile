//	10 Verificar si un número es primo
#include <stdio.h>
int main() {
    //p variable que almacena el numero primo 
    //el valor ingresado por el usuario
    int n,p=1;
    printf("Ingrese un número: ");
    scanf("%d", &n);
    //ocupo el comando if con al condicion de que si  n es menor que i
    //la variable p es igual a 0, por lo tanto no hay numero primos
    //esto esta condicionado con el fin de n tiene que ser mayor que 1 
    // en el caso de que esto no se cumpa , else , continuara con el comando for
    if (n<= 1) {
        p = 0;
    } else {
        //la variable i parte desde el 2 hasta que la el numero ingresado por el usuario dividido entre 2
        //y la operacion logica && la variable p, se aumenta 
        // hace uso de el comando if, con la condicion de que el residuo de n y i sea igual a 0
        //p es igual a 0 
        for (int i = 2; i <= n / 2 && p; i++) {
            if (n% i == 0) {
                p = 0;
            }
        }
    }//el comado if, condiciona que si p es igual a cero el numero es primo 
     // si no, else, el numero no es primo 
    if (p)
        printf("%d es un número primo.\n", n);
    else
        printf("%d no es un número primo.\n", n);
    return 0;
}

