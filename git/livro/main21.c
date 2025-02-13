#include <stdio.h>

int main(){
    int n, u, d, c;

    printf("Digite um numero com acima de 100: ");
    scanf("%d", &n);

    u = n % 10;
    d = (n / 10) % 10;
    c = n / 100;

    printf("%d%d%d\n", u, d, c);

    return 0;
}