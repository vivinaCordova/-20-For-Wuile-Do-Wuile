// 20 calcular la suma de los factoriales de los primeros  n numeros
#include <stdio.h>
int main() {
    int n, f=1, sum=0, i=1;
    printf("calcual la suma de los factoriale de n numeros\n ingrese numero;");
    scanf("%d", &n);
    //el comando wuile parte desde i con valor 1 hasta el valor ingresado por el usuario 
    //f actualiza cada suma de i por uno, 
    //f precenta la serie 
    //sum actualiza y suma f
    //sum precenta la suma de los valores factoriales
    while(i<=n){
        f*=i*1;
        printf("%d ", f);
        i++;
        sum=sum+f;
    }
    printf("= %d", sum);
    return 0;
}