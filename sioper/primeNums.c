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

void printPrimeNums(int bot, int top){
    for(bot;bot<=top;++bot){
        if(primeNum(bot) == 1){
            printf("%d\n",bot);
        }
    }
}

void primeList(int arr[], int size){
    int i;
    
    for(i=0;i<size;++i){
        if(primeNum(arr[i]) == 1){
            printf("%d\n",i);
        }    
    }
    
}

int main() {
    int n;
    printf("1.Determinar primo \n");
    printf("2.Listar primos en un rango \n");
    printf("3.Listar primos en un arreglo \n");
    scanf("%d",&n);
    if(n == 1){
        int num;
        printf("Ingrese un numero: ");
        scanf("%d",&num);
        if(primeNum(num) == 1){
            printf("Es primo\n");
        }else{
            printf("No es primo\n");
        }
    }else if(n == 2){
        int bot,top;
        printf("Ingrese el rango inferior: ");
        scanf("%d",&bot);
        printf("Ingrese el rango superior: ");
        scanf("%d",&top);
        printPrimeNums(bot,top);
    }else if(n == 3){
        int size;
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;++i){
            printf("Ingrese el elemento %d: ",i);
            scanf("%d",&arr[i]);
        }
        primeList(arr,size);
    }


    return 0;
}

