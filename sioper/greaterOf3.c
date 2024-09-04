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
    return 0;
}