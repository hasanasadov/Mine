#include <iostream>
using namespace std;
class Rectangle {
private:
    int length;
    int width;
public:
    int Area(){return length*width;}
    void setlength(int len){length=len;}
    void setwidth(int w) {width=w;}
    Rectangle operator+(const Rectangle& r){
        Rectangle rec;
        rec.length=this->length+r.length;
        rec.width=this->width+r.width;
        return rec;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2;
    Rectangle r3;
    r1.setlength(5);
    r1.setwidth(7);
    r2.setlength(10);
    r2.setwidth(8);
    cout<<"Area of r1 : "<<r1.Area()<<endl;
    cout<<"Area of r2 : "<<r2.Area()<<endl;
    r3=r1+r2;
    cout<<"Area of r3 : "<<r3.Area()<<endl;
    return 0;
}