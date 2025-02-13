#include <stdio.h>


int main() {
    int x, z;
    long int res = 1;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Z: ");
    scanf("%d", &z);

    for(int i = 0; i < z; i++){
        res = res * x;
    }


    printf("%d elevado a %d é igual a %\d\n", x, z, res);

    return 0;
}