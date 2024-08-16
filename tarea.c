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


// Online C compiler to run C program online
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
    int arr[] = {10, 23, 17, 33, 19, 2, 8, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    primeList(arr, size);
    //printPrimeNums(3,5);
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


// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Shape{
    private:
        string type;
        string color;
    public:
        Shape(string color, string type) : color(color), type(type) {}

        string getType() {
            return type;
        }

        string getColor() {
            return color;
        }

        void setType(string x) {
            type = x;
        }

        void setColor(string x) {
            color = x;
        }

        virtual double getArea() = 0;
        virtual double getPerimeter() = 0; 
};

class Circle : public Shape{
    private:
        double radius;
    public:
        Circle(string type, string color, double radius) 
            : Shape(color, type), radius(radius) {}
        double getRadius(){
            return radius;
        }
        void setRadius(double r){
            radius = r;
        }
        double getArea() override {
            return M_PI * radius * radius;
        }
        double getPerimeter() override {
            return M_PI * radius * 2;
        }
        
        
    
};

class Rectangle: public shape{
    private:
        double lenght;
        double width;
    public:
        Rectangle(string type, string color,double l, double w)
            :Shape(color, type),length(l),width(w){}
        double getLenght(){
            return lenght;
        }
        double getWidth(){
            return width;
        }
        void setLenght(double l){
            lenght = l;
        }
        void setWidth(double w){
            width = w;
        }
        double getArea() override {
            return lenght*width;
        }
        double getPerimeter() override {
            return lenght*2+width*2;
        }
        
        
}





int main() {
    Circle myCircle("Circle", "Red", 5.0);
    
    cout << "Shape Type: " << myCircle.getType() << endl;
    cout << "Shape Color: " << myCircle.getColor() << endl;
    cout << "Circle Radius: " << myCircle.getRadius() << endl;
    cout << "Area of Circle: " << myCircle.getArea() << endl;
    cout << "Perimeter of Circle: " << myCircle.getPerimeter() << endl;

    return 0;
}
