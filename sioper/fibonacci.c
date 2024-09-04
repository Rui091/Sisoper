#include <stdio.h>

    
void imprimirFibonacciHasta(int n) {
    if (n <= 0) {
        printf("El número debe ser mayor que 0.\n");
        return;
    }
    // Inicializar los primeros dos números de la serie de Fibonacci
    int a = 0, b = 1;
    // Imprimir los números de Fibonacci hasta que el siguiente número sea mayor que n
    while (a <= n) {
        printf("%d ", a);
        int siguiente = a + b;
        a = b;
        b = siguiente;
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    imprimirFibonacciHasta(n);
    return 0;
}