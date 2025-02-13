#include <stdio.h>
#include <math.h>

int n_fatorial(int n) { 
    int h = 1;
    for (int i = 2; i <= n; i++){
    h *= i;
    }    
    return h;
}
int main(){

    int n;

    printf("Digite um numero:");
    scanf("%d", &n);

    printf("O fatorial de %d e: %d.\n", n, n_fatorial(n));

}