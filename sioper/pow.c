#include <stdio.h>

int powRecursive(int n, int m){
    if(m == 0){
        return 1;
        }
    
    return n * powRecursive(n, m - 1);
}

int main() {
    int n, m;
    printf("Digite la base: ");
    scanf("%d", &n);
    printf("Digite el exponente: ");
    scanf("%d", &m);
    printf("%d^%d = %d", n, m, powRecursive(n, m));
    return 0;
}