// 6 factorial de un numero
#include <stdio.h>
int main (){
    int n, i=1,f=1 ;
    printf("ingrese un numero ");
    scanf("%d", &n);
    while (i<n){
        i++;
        f*=i;
    }
    printf(" %d", f);
    return 0;
}
