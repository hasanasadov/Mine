#include <iostream>
#include <string>
#include <cmath>
#define USE_MATH_DEFINES
using namespace std;

class Geometry{
    public: 
        virtual void getarea(){cout<<"The area: "<<endl;}
        virtual void getperimeter(){cout << " Perimeter: "<<endl;}

};

class Polygon: public Geometry{
    virtual void getarea(){
            cout<<"The Polygon: "<<endl;
        }
};

class Circle: public Geometry{
    protected:
        int radius;
    public:
        Circle(int rad){radius=rad;}
        void getarea(){cout<<"\nCircle area: "<<M_PI*radius*radius<<endl;}
        void getperimeter(){cout << "Circle Perimeter: "<< 2*M_PI*radius << endl;}

};

class Triangle: public Polygon{
    public:
        virtual void getarea(){
            cout<<"The Triangle of : "<<endl;
        }
};

class EqTriangle:public Triangle{
    protected:
        int eqside;
    public:
        EqTriangle(int eq){eqside=eq;};
        void getarea(){cout<< "\nEqTriangle area: "<<eqside * eqside * sqrt(3) / 4 <<endl;}
        void getperimeter(){cout << "EqTriangle Perimeter: "<< eqside*3 << endl;}

};

class RightTriangle:public Triangle{
    protected:
        int a;
        int b;
    public:
        RightTriangle(int ao,int bo){a = ao;b=bo;};
        void getarea(){cout<<"\nRightTriangle area: "<< a * b /2 <<endl;}
        void getperimeter(){cout << "RightTriangle Perimeter: "<< a + b + sqrt(a*a+b*b) << endl;}
};



class Quadrilateral: public Polygon{
    public:
        void getarea(){cout<< "Quadrilateral area: " <<endl;}
};

class Rectangle: public Quadrilateral{
    protected:
        int side1;
        int side2;
    public:
        Rectangle(int si1,int si2){side1=si1;side2=si2;};
        void getarea(){cout<< "\nRectangle area: "<< side1 * side2 <<endl;}
        void getperimeter(){cout << "Rectangle Perimeter: "<< 2*(side1+side2) << endl;}

};

class Square: public Quadrilateral{
    protected:
        int side;
    public:
        Square(int s){side=s;};
        void getarea(){cout << "\nSquare area: "<< side * side << endl;}
        void getperimeter(){cout << "Square Perimeter: "<< side*4 << endl;}
};


int main(){
    
    Circle c1(3);
    Rectangle rec(4,5);
    RightTriangle rti(3,4);
    Square sq(5);
    Geometry *t1=&c1,*t2=&rec,*t3=&rti,*t4=&sq;
    t1->getarea();t1->getperimeter();
    t2->getarea();t2->getperimeter();
    t3->getarea();t3->getperimeter();
    t4->getarea();t4->getperimeter();
}