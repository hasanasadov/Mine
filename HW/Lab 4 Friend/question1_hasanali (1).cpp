#include <iostream>
#include <string.h>
using namespace std;

class Employee{
friend class Manager;

private:
    int ID;
    string Name;
    string Position;
    int Salary;
public:
    Employee(int,string,string,int);
    void print();
};

Employee::Employee(int i,string n,string p,int s){
    ID=i;
    Name=n;
    Position=p;
    Salary=s;
}
void Employee::print(){
    cout<<ID<<" ";
    cout<<Name<<" ";
    cout<<Position<<" ";
    cout<<Salary<<endl;
}


class Manager{
public:
    void change(Employee& e,int ID2,string Name2,string Position2,int Salary2){
        e.ID=ID2;
        e.Name=Name2;
        e.Position=Position2;
        e.Salary=Salary2;
    }
};
int main(){
    Employee e1(123,"hasanali","headman",10);
    Manager m1;
    e1.print();
    m1.change(e1,231,"hasan","student",1000);
    e1.print();
}