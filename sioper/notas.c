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
