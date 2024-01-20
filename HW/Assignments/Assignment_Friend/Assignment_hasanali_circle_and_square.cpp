#define USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

class Circle{
private:
    double radius;
public:
    Circle();
    Circle(double r);
    double area(){return M_PI*radius*radius;}
    double circums(){return 2*M_PI*radius;}
    double radiuss(){return radius;}
};
Circle::Circle(){radius=0;}
Circle::Circle(double r){radius=r;}

class Square{
private:
    double side;
public:
    Square();
    Square(double);
    double area(){return side*side;}
    double circums(){return 4*side;}
    double sidee(){return side;}
    friend double add(Circle cr,Square sq);
};
Square::Square(){side=0;}
Square::Square(double s){side=s;}

double add(Circle cr,Square sq){return cr.radiuss()+sq.sidee();}

int main (){
    Circle c1(5);
    Square s1(4);
    cout << "Here is the Circle's data:\n";
    cout << "Circle Radius: " << c1.radiuss() << endl;
    cout << "Circle Circums: " << c1.circums() << endl;
    cout << "Circle Area: " << c1.area() << endl<<endl;
    cout << "Here is the Square's data:\n";
    cout << "Square Side: " << s1.sidee() << endl;
    cout << "Square Circums: " << s1.circums() << endl;
    cout << "Square Area: " << s1.area() << endl << endl;
    cout << "Circle radius+Square Side: " << add(c1,s1) << endl;
    return 0;
}