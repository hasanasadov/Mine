#include <iostream>
#include <string>
using namespace std;
int area(int a,int b){
    cin>>a>>b;
    cout<<"AREA w/int number "<<endl;
    return a*b;
}
double area(double a,double b){
    cin>>a>>b;
    cout<<"Double number "<<endl;
    return a*b;
}
int main(){
    int a,b;
    cout<<area(a,b)<<endl;
    cout<<area(a,b)<<endl;
}