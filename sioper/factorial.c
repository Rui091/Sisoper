#include <stdio.h>

int factorial(int n){
    int ans=1;
    int i;
    for (i=1;i<=n;++i){
        ans*=i;
    }
    return ans;
}
int main() {
    int n;
    printf("Digite un numero: ");
    scanf("%d",&n);
    printf("El factorial de %d es %d",n,factorial(n));

    return 0;
}