#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c,D;
    int x1,x2;
    cout << "enter a:";
    cin >> a;
    cout << "enter b:";
    cin >> b;
    cout << "enter c:";
    cin >> c;
    D=b*b-4*a*c;
    if (b>0 && c>0){
        cout << "equation is " << a<< "x^2+"<< b << "x+" << c<<endl;
    }
    if (b<0 && c>0){
        cout << "equation is " << a<< "x^2"<< b << "x+" << c<<endl;
    }
    if (b>0 && c<0){
        cout << "equation is " << a<< "x^2+"<< b << "x" << c<<endl;
    }
    if (b<0 && c<0){
        cout << "equation is " << a<< "x^2"<< b << "x" << c<<endl;
    }
    if (D<0){
        cout << "equation has no real roots";
    }
    else if(D==0){
        cout <<"equation has two equal roots:"<<endl;
        x1=((-b+sqrt(D))/(2*a));
        cout << "x1 and x2 = "<< x1;
    }
    else{
        cout <<"equation has two real roots"<<endl;
        x1=((-b+sqrt(D))/(2*a));
        cout << "x1 = "<<x1<<endl;
        x2=((-b-sqrt(D))/(2*a));
        cout <<"x2 = "<< x2;
    }
    return 0;
}