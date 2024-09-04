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