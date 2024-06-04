// 18 contar numeros primos hasta n
#include <stdio.h>
int main() {
    int n, cont = 0, i = 2;
    printf("Contador de números primos\nIngrese el número ");
    scanf("%d", &n);
    while (i < n) {
        int j = 2, p = 1;
        while (j <= i / 2 && p == 1) {
            if (i % j == 0) {
                p = 0;
            }
            j++;
        }
        if (p == 1) {
            printf("%d ", i);
            cont++;
        }
        i++;
    }
    printf("\nHay %d números primos hasta %d.\n", cont, n);
    return 0;
}
