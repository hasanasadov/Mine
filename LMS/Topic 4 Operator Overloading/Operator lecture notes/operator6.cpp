-------------------------------------------------------------------#include <iostream>
using namespace std;
class Test{
private:
    int i;
public:
    Test(): i(5) { }
    // Return type is Test
    Test operator ++(){
        Test temp;
        ++i;
        temp.i = i;
        return temp;
    }
    void Display(){cout<<"i = "<<i<<endl;}
};

int main() {
    Test obj1, obj2;
    obj1.Display();
    obj2.Display();
    obj2 = ++obj1;
    obj1.Display();
    obj2.Display();
    return 0; 
}