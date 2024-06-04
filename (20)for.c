//20 Calcular la suma de las factoriales de los primeros n números.
#include <stdio.h>
int main() {
    //n valor ingresado por el usuario
    //f variable que almacena el valor de los factoriales
    //sum variable que almace las uma de los factoriales 
    int n, f=1, sum=0;
    printf("calcula la suma de las factorilaes\ningrese un numero ");
    scanf("%d", &n);
    //el comando for parte desde i con valor 1 hasta el valor ingresado por el usuario 
    //f actualiza cada suma de i por uno, 
    //f precenta la serie 
    //sum actualiza y suma f
    //sum precenta la suma de los valores factoriales
    for(int i=1; i<=n ; i++){
        f*= i*1;
        printf("%d ", f);
        sum+=f; 
    }
    printf("la suma de el factirial es  %d", sum);
    return 0;
}