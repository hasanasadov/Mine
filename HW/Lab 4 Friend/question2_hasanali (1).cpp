#include <iostream>
#include <string.h>
using namespace std;

class Triangle
{
private:
    int side1;
    int side2;
    int side3;
public:
    Triangle(int,int,int);
    int per(){return side1+side2+side3;}
    void compare(Triangle t1){
        if (t1.per()>this->per()){
            cout<<"T1 is greater";
        }
        else{
            cout<<"T2 is greater";
        }
    }
};

Triangle::Triangle(int s1,int s2,int s3){
    side1=s1;
    side2=s2;
    side3=s3;
}
int main(){
    Triangle t1(1,2,3);
    Triangle t2(5,6,7);
    cout<<"T2 perimeter is  "<<t2.per()<<endl;
    cout<<"T1 perimeter is  "<<t1.per()<<endl;
    t2.compare(t1);
}