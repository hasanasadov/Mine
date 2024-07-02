#include <iostream>
#include "Circle.cpp"
using namespace std;
int main(void){
    Circle c1;
    Circle c2(5);
    cout << "Here is the Circle's data:\n";
    cout << "C1 Radius: " << c1.radiuss() << endl;
    cout << "C1 Circums: " << c1.circums() << endl;
    cout << "C1 Area: " << c1.area() << endl;
    cout << "C2 Radius: " << c2.radiuss() << endl;
    cout << "C2 Circums: " << c2.circums() << endl;
    cout << "C2 Area: " << c2.area() << endl;
    return 0;
}