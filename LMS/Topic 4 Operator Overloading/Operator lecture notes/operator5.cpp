#include<iostream>
using namespace std;
class Test {
private:
    int i;
public:
    Test():i(0) { }
    void operator ++(){++i;}
    void Display(){cout <<"i=" <<i << endl;}
};
    
int main(){
    Test obj;
    obj.Display();
    ++obj;
    obj.Display();
    return 0; 
}