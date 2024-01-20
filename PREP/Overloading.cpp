#include <iostream>
#include <string>
#include <math.h>
using namespace std;

double area(double a,double b,double c){
    double A=0;
    double p=(a+b+c)/2;
    if(abs((a-b)<c) && (a+b)>c){
        A=sqrt(p*(p-a)*(p-b)*(p-c));
        return A;
    }
    else{cout<<"There is not such a triangle "<<endl;return 0;}
}

int area(int a){
    int s=a*a;
    return s;
}
int area(int a1,int b1){
    int s=a1*b1;
    return s;
}

int main(){
    int a=3;
    int a1=5,b1=4;
    double a2=6,b2=8,c2=10;
    cout<<area(a)<<endl;
    cout<<area(a1,b1)<<endl;
    cout<<area(a2,b2,c2);
}