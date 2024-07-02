#include <iostream>
#include <string>
using namespace std;

class Person{
protected:
    int age;
    string name;
};


class Faculty:public Person{
protected:
    string department;
    string position;   
};
class Administrator:public Faculty{
protected:
    string adminname;
    /// @brief 
    int admine=age;
public:
    Administrator(){adminname="None";admine=0;}
    Administrator(string dp,string pos,string nm,int ag){department=dp;position=pos;name=nm;age=ag;}
    void print(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Position: "<<position<<endl;
    }
};
class Teacher:public Faculty{
protected:
    string teachername;
public:
    Teacher(){teachername="";}
    Teacher(string tch,string nm,int ag,string dp,string pz){teachername=tch;name=nm;age=ag;department=dp;position=pz;}
    void print(){
        cout<<"Person Name: "<<name<<endl;
        cout<<"Person Age: "<<age<<endl;
        cout<<"Teacher name: "<<teachername<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Position: "<<position<<endl;
    }
};



class Student:public Person{
protected:
    int year;
    string major;
};
class Undergarduate:public Student{
protected:
    int gpa;
public:
    Undergarduate(){gpa=0;}
    Undergarduate(int gp,int yr,string mj,string nm,int ag){gpa=gp;major=mj;year=yr;name=nm;age=ag;}
    void print(){
        cout<<"Person Name: "<<name<<endl;
        cout<<"Person Age: "<<age<<endl;
        cout<<"Student Year: "<<year<<endl;
        cout<<"Student major: "<<major<<endl;
        cout<<"GPA: "<<gpa<<endl;
    }
};
class Graduted: public Student{
protected:
    string grphone;
public:
    Graduted(){grphone="";}
    Graduted(string gph,int yr,string mj,string nm,int ag){grphone=gph;year=yr;major=mj;name=nm;age=ag;}
    void print(){
        cout<<"Person Name: "<<name<<endl;
        cout<<"Person Age: "<<age<<endl;
        cout<<"Student Year: "<<year<<endl;
        cout<<"Student major: "<<major<<endl;
        cout<<"Phone: "<<grphone<<endl;
    }
};



int main(){
    Undergarduate u1(6,2000,"Telebe","hasan",18);
    Graduted g1("0502068605",2001,"suu","has2",20);
    Teacher t1("Azakov","Hesen",18,"Campus","Proffessor");
    Administrator a1("Campus","prof","Azakov",99);
    cout<<"Undergraduate: "<<endl;
    u1.print();
    cout<<"\nGraduate: "<<endl;
    g1.print();
    cout<<"\nTeacher: "<<endl;
    t1.print();
    cout<<"\nAdmin: "<<endl;
    a1.print();
}