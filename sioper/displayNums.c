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