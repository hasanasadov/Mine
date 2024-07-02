#include <iostream>
#include <iomanip>
using namespace std;
class Numbers {
private:
    int x,y,z;
public:
    void setnum(){
        cout<<"Enter three numbers \n";
        cout<<"x= ";cin>>x;
        cout<<"y= ";cin>>y;
        cout<<"z= ";cin>>z;
    }
    void display(){cout<<x<<"\t"<<y<<"\t"<<z;}
    void operator-(){x=-x;y=-y;z=-z;}
};

int main() {
    Numbers num;
    num.setnum();
    cout<<"\nNumbers are : \n";
    num.display();
    -num;
    cout<<"\nNegative numbers are : \n";
    num.display();
    cout<<endl;
    return 0;
}