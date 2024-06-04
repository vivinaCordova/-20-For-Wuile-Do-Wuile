//5 Serie Fibonacci
#include <stdio.h>
int main() {
    int n, a=0, b=1, c;
    printf("serie fibonacci\ningrese numero:");
    scanf("%d", &n);
    //en este caso la funcion printf, precentar en pantalla los valores de la variable
    //para una serie mas completa, 
    printf("%d %d ",a,b);
    //for la variable i es definida como entero
    //parte desde el dos, hasta el numero que el usuario ingresa
    //la serie fibonaci comnsisten en que cada numero es la suma de los dos numero anterioes, 
    for(int i=2; i<n; i++){
        //c es una variable que almacena la suma de las variable con valores ya asignados
        c=a+b;
        printf("%d ",c);
        //haciendo uso de un comado if determira si i es menor a la resta de n menos 1,
        //entonces a sera igual a b, y b igual a c, solo si la condicion se cumple
        if (i< n-1){
         a=b;
         b=c; }
    }
    return 0;
}

