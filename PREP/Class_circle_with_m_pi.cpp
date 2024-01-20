#include <iostream>
#include <cmath>
#define USE_MATH_DEFINES
using namespace std;

class Circle{
    protected:
        double radius;
    public: 
        void print(){cout<<"salam"<<endl;}
};

class CalcLen:public Circle{
    public:
        CalcLen(double r){radius=r;}
        void Calc(){cout<<"Lenght is "<<2*M_PI*radius<<endl;}
};

class CalcArea:public Circle{
    public:
        CalcArea(double r){radius=r;}
        void Calc(){cout<<"Area is "<<M_PI*radius*radius<<endl;}
};

class CalcVol:public Circle{
    public:
        CalcVol(double r){radius=r;}
        void Calc(){cout<<"Volume is "<<(4.0/3)*M_PI*radius*radius*radius <<endl;}
};
int main(){
    int n;cout<<"Enter number of func(1-3) : \nfor Lenght 1\nfor Area 2\nfor Volume 3\n"<<endl;cin>>n;
    if((n<1)||(n>3)){return 0;}

    double r;cout<<"Enter the Radius : "<<endl;cin>>r;

    CalcLen l1(r);CalcArea a1(r);CalcVol v1(r);
    if(n==1){l1.Calc();}
    if(n==2){a1.Calc();}
    if(n==3){v1.Calc();}
    return 0;
}