#include<iostream>
using namespace std;
class Test {
private :
    int i;
public:
    Test(): i(5){}
    // overloaded prefix ++ operator
    Test operator++(){
        Test temp;
        ++i;
        temp.i=i;
        return temp;
    }
    // overloaded postfix ++ operator
    Test operator++(int){
        Test temp;
        temp.i=i++;
        return temp;
    }
    void Display(){cout<<"i= "<<i<<endl;}
};

int main() {
    Test obj1, obj2;
    obj1.Display();
    obj2.Display();
    obj2=++obj1;
    obj1.Display();
    obj2.Display();
    obj2=obj1++;
    obj1.Display();
    obj2.Display();
    return 0; 
}