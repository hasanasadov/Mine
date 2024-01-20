#include <iostream>
#include <string>
using namespace std;

class Student{
protected:
    int id;
    string fname;
    string lname;
    double math;
    double ph;
    double chem;
public:
    void print(){cout<<id<<fname<<lname<<endl;}
};
class Total:public Student{
    protected:
        double tot;
    public:
        int to(){tot=math+ph+chem;return tot;}
};
class Average:public Total{
    protected:
        double average;
    public:
        void print(){cout<<id<<fname<<lname<<endl;}
        Average(){id=0;fname="None";lname="None";math=0;ph=0;chem=0;};
        Average(int i,string fn,string ln,int mt,int phy,int chm){id=i;fname=fn;lname=ln;math=mt;ph=phy;chem=chm;};
        void ave(){cout<<to();}
};

int main(){
    Average q1(3046," Hasan"," Asadov",85,75,50);
    q1.print();
    q1.ave();
}