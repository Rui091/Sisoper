#include <stdio.h>

int oddOrEven(int n){
    if (n%2 == 0){
        return 1;
    }
    return 0;
    
}

int main() {
    int n;
    printf("Digite un numero: ");
    scanf("%d",&n);
    if (oddOrEven(n) == 0){
        printf("El numero es impar");
    }
    else{
        printf("El numero es par");
    }

    return 0;
}