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
    for (i=2;i<n;++i){
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
