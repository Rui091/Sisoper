#include <stdio.h>


int main() {
    
    float prom = 0;
    int i;
    float notas[6];
    for (i=1; i<=6;++i){
        float nota;
        printf("Digite nota %d: ",i);
        scanf("%f", &nota);
        notas[i-1] = nota;
    }
    prom = notas[0]*0.05+notas[1]*0.25+notas[2]*0.15+notas[3]*0.2+notas[4]*0.15+notas[5]*0.2;
    printf("La nota final es: %f",prom);
    
    

    return 0;
}


// Online C compiler to run C program online
#include <stdio.h>

int primeNum(int n){
    int i=0;
    if(n == 0){
        return 0;
    }
    for (i=2;i*i<=n;++i){
        if( n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n); 
    int prime = primeNum(n);
    if (prime==0){
        printf("No es primo");
    }
    else{
        printf("Es primo");
    }

    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>

int leap(int year){
    if(year%4 !=0){
        return 0;
    }
    if(year%100 == 0 && year%400!=0){
        return 0;
    }
    return 1;    
}

int main() {
    printf("Escribe un año: ");
    int year;
    scanf("%d",&year);
    int leapYear = leap(year);
    if(leapYear==1){
        printf("%d es un año viciesto",year);
    }
    else{
        printf("%d no es un año viciesto",year);
    }
    
    return 0;
}

// Online C compiler to run C program online
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



// Online C compiler to run C program online
#include <stdio.h>

int max(int arr[3]){
    int i;
    int maxNum = arr[0];
    for(i=1;i<3;++i){
        if (maxNum < arr[i]){
            maxNum = arr[i];
        } 
    }
    return maxNum;
}

int main() {
    int i;
    int arr[3];
    for(i=0;i<3;++i){
        printf("Ingrese el numero %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("El mayor es: %d",max(arr));

// Online C compiler to run C program online
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
    

}


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i;
    for(i=1; i < 11 ; i++){
        printf("Numero en decimal: %d\n", i);
        int octal;
        int hex;
        if(i < 8){
            octal = i;
        }
        else if( i == 8){
            octal = 10;
        }
        else if(i == 9){
            octal = 11;
        }
        else if(i == 10){
            octal = 12;
        }
        printf("Numero en octal: %d\n", octal);
        
        if(i == 10){
            printf("Numero en hexadecimal: A\n");
            
        }else{
            printf("Numero en hexadecimal: %d\n", i);
        }
        
        printf("\n");
    };
    
    
    
    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>
#define MAX_LIMIT 20
int upperCase(char letter){
    if (letter>=65 && letter<=95){
        return 1;
    }
    return 0;
}

int main() {
    char str[MAX_LIMIT];
    fgets(str, MAX_LIMIT, stdin);
    
    int i=0;
    int flag=0;
    while(str[i] != '\n' && flag == 0){
        if(upperCase(str[i]) == 1){
            flag = 1;
        
        }
        ++i;
    }
    if (flag == 1){
        printf("Hay mayusculas en la pablabra");
    }
    else{
        printf("No hay mayusculas en la pablabra");
    }

    return 0;
}


