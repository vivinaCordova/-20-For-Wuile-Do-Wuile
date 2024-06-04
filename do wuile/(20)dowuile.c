// 20 la suma de los factoriales de los primeros n numeros
#include<stdio.h>
int main(){
    int n, i=1, f=1, sum=0;
    printf("la suma de los primeros n numeros factoriales\ningrese un numero: ");
    scanf("%d", &n);
    //el comando do wuile parte desde i con valor 1 hasta el valor ingresado por el usuario 
    //f actualiza cada suma de i por uno, 
    //f precenta la serie 
    //sum actualiza y suma f
    //sum precenta la suma de los valores factoriales
    do{
        f*=i*1;
        sum+=f;
        i++;
    }while(i<=n);
    printf("\n%d",sum );
    return 0;
}