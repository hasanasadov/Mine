#include <iostream>
#include <cmath>
#define USE_MATH_DEFINES
using namespace std;

class Circle{
    public: 
        virtual double Calculation(double radius){return 0;}
};

class CalcLen:public Circle{
    public:
        double Calculation(double radius){return 2*M_PI*radius;}
};

class CalcArea:public Circle{
    public:
        double Calculation(double radius){return M_PI*radius*radius;}
};

class CalcVol:public Circle{
    public:
        double Calculation(double radius){return (4.0/3)*M_PI*radius*radius*radius;}
};

void Result(Circle *p,double radius){
    double res=p->Calculation(radius);
    cout<<"Result = "<<res<<endl;
}

int main(){
    Circle *p ; 
    CalcLen obj1 ; 
    CalcArea obj2 ; 
    CalcVol obj3 ; 

    int n;cout<<"Enter number of func(1-3) : \nfor Lenght 1\nfor Area 2\nfor Volume 3\n"<<endl;cin>>n;
    if((n<1)||(n>3)){return 0;}

    double radius;cout<<"Enter the Radius : "<<endl;cin>>radius;

    if(n==1){p=&obj1;};if(n==2){p=&obj2;};if(n==3){p=&obj3;};
    
    Result(p,radius);
}