#include <iostream>
using namespace std;
class Circle {
    double radius;
    public:
        Circle();
        Circle(double r);
        double area (){return (3.14*radius*radius);}
        double circums(){return (2*3.14*radius);}
        double radiuss(){return (radius);}
};
Circle::Circle(){
    radius=0;}
Circle::Circle(double r){
    radius=r;}
int main (){
    Circle c1;
    Circle c2(5);
    cout << "Here is the Circle's data:\n";
    cout << "C1 Radius: " << c1.radiuss() << endl;
    cout << "C1 Circums: " << c1.circums() << endl;
    cout << "C1 Area: " << c1.area() << endl;
    cout << "C2 Radius: " << c2.radiuss() << endl;
    cout << "C2 Circums: " << c2.circums() << endl;
    cout << "C2 Area: " << c2.area() << endl;
    return 0;}