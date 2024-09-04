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

class Rectangle: public Shape{
    private:
        double lenght;
        double width;
    public:
        Rectangle(string type, string color,double l, double w)
            :Shape(color, type),lenght(l),width(w){}
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
        
        
};

class Triangle: public Shape{
    private:
        double side1;
        double side2;
        double side3;
    public:
        Triangle(string type, string color, double s1, double s2, double s3)
            :Shape(color, type),side1(s1),side2(s2),side3(s3){}
        double getSide1(){
            return side1;
        }
        double getSide2(){
            return side2;
        }
        double getSide3(){
            return side3;
        }
        void setSide1(double s1){
            side1 = s1;
        }
        void setSide2(double s2){
            side2 = s2;
        }
        void setSide3(double s3){
            side3 = s3;
        }
        double getArea() override {
            double s = (side1+side2+side3)/2;
            return sqrt(s*(s-side1)*(s-side2)*(s-side3));
        }
        double getPerimeter() override {
            return side1+side2+side3;
        }
};

class Square: public Shape{
    private:
        double side;
    public:
        Square(string type, string color, double s)
            :Shape(color, type),side(s){}
        double getSide(){
            return side;
        }
        void setSide(double s){
            side = s;
        }
        double getArea() override {
            return side*side;
        }
        double getPerimeter() override {
            return side*4;
        }
};





int main() {
    Circle myCircle("Circle", "Red", 5.0);
    cout << "Shape Type: " << myCircle.getType() << endl;
    cout << "Shape Color: " << myCircle.getColor() << endl;
    cout << "Circle Radius: " << myCircle.getRadius() << endl;
    cout << "Area of Circle: " << myCircle.getArea() << endl;
    cout << "Perimeter of Circle: " << myCircle.getPerimeter() << endl;
    cout << endl;
    Square mySquare("Square", "Blue", 4.0);
    cout << "Shape Type: " << mySquare.getType() << endl;
    cout << "Shape Color: " << mySquare.getColor() << endl;
    cout << "Square Side: " << mySquare.getSide() << endl;
    cout << "Area of Square: " << mySquare.getArea() << endl;
    cout << "Perimeter of Square: " << mySquare.getPerimeter() << endl;
    cout << endl;
    Rectangle myRectangle("Rectangle", "Green", 4.0, 6.0);
    cout << "Shape Type: " << myRectangle.getType() << endl;
    cout << "Shape Color: " << myRectangle.getColor() << endl;
    cout << "Rectangle Lenght: " << myRectangle.getLenght() << endl;
    cout << "Rectangle Width: " << myRectangle.getWidth() << endl;
    cout << "Area of Rectangle: " << myRectangle.getArea() << endl;
    cout << "Perimeter of Rectangle: " << myRectangle.getPerimeter() << endl;
    cout << endl;
    Triangle myTriangle("Triangle", "Yellow", 3.0, 4.0, 5.0);
    cout << "Shape Type: " << myTriangle.getType() << endl;
    cout << "Shape Color: " << myTriangle.getColor() << endl;
    cout << "Triangle Side 1: " << myTriangle.getSide1() << endl;
    cout << "Triangle Side 2: " << myTriangle.getSide2() << endl;
    cout << "Triangle Side 3: " << myTriangle.getSide3() << endl;
    cout << "Area of Triangle: " << myTriangle.getArea() << endl;
    cout << "Perimeter of Triangle: " << myTriangle.getPerimeter() << endl;
    

    return 0;
}