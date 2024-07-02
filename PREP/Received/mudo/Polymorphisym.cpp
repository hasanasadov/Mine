#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

class Shape{
    protected:
        int side = 1;
};
class two_d: public Shape{
    public:
        virtual float area();
};
class three_d: public Shape{
    public:
        virtual float area();
        virtual float volume();
};
class Circle: public two_d{
    public:
        float area(){
            return M_PI*pow(side, 2);
        }
};
class Square: public two_d{
    public:
        float area(){
            return pow(side, 2);
        }
};
class Triangle: public two_d{
    public:
        float area(){
            return sqrt(3)*pow(side, 2)/4;
        }
};
class Sphere: public three_d{
    public:
        float area(){
            return 4*M_PI*pow(side, 2);
        }
        float volume(){
            return 4/3*M_PI*pow(side, 3);
        }
};
class Cube: public three_d{
    public:
        float area(){
            return 6*pow(side, 2);
        }
        float volume(){
            return pow(side, 3);
        }
};
class Tetrahedron: public three_d{
    public:
        float area(){
            return sqrt(3)*pow(side, 2);
        }
        float volume(){
            return sqrt(2)*pow(side, 3)/12;
        }
};
void result_2(two_d *p){
    cout << "The area is " << p -> area() << endl;
}
void result_3(three_d *p){
    cout << "The area is " << p -> area() << endl;
    cout << "The volume is " << p -> volume() << endl;
}
int main(){
    Circle C;
    Square S;
    Triangle T;
    Sphere SP;
    Cube CU;
    Tetrahedron TE;
    cout << "The area of the circle: " << C.area() << endl;
    cout << "The area of the square: " << S.area() << endl;
    cout << "The area of the triangle: " << T.area() << endl;
    cout << "The area of the sphere: " << SP.area() << endl;
    cout << "The volume of the sphere: " << SP.volume() << endl;
    cout << "The area of the cube: " << CU.area() << endl;
    cout << "The volume of the cube: " << CU.volume() << endl;
    cout << "The area of the tetrahedron: " << TE.area() << endl;
    cout << "The volume of the tetrahedron: " << TE.volume() << endl << endl;
    two_d *p1;
    p1 = &C;
    result_2(p1);
    three_d *p2;
    p2 = &CU;
    result_3(p2);
}
