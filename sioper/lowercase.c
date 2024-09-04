#include <stdio.h>
#define MAX_LIMIT 40
int lowerCase(char letter){
    if (letter>=97 && letter<=110){
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
        if(lowerCase(str[i]) == 1){
            flag = 1;
        
        }
        ++i;
    }
    if (flag == 1){
        printf("Hay minusculas en la pablabra");
    }
    else{
        printf("No hay minusculas en la pablabra");
    }

    return 0;
}