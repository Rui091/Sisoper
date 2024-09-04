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