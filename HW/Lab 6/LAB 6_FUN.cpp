#include <iostream>
#include <string>
using namespace std;

class Person{
friend class Faculty;
friend class Student;
protected:
    int age;
    string name;
public:
    Person(){age=0;name="Hasan";}
    Person(string nm,int ag){name=nm;age=ag;}
    void print(){
        cout<<"Person age: "<<age<<endl;
        cout<<"Person name: "<<name<<endl;
    }
};




class Faculty:public Person{
friend class Administrator;
friend class Teacher;
protected:
    string department;
    string position;
    class Person p1;
public:

    Faculty(){department="campus";position="1st";}
    Faculty(Person& p1,string dp,string poz){department=dp;position=poz;}
    void print(){
        cout<<"Faculty Department: "<<department<<endl;
        cout<<"Faculty position: "<<position<<endl;
        p1.print();
    }  
};
class Administrator:public Faculty{
protected:
    string adminname;
    int admine=age;
    class Faculty fa1;
public:
    Administrator(){adminname="hasanali";age=18;}
    Administrator(Faculty &fa1,string an,int aa){adminname=an;admine=aa;}
    void print(){
        cout<<"Admin name: "<<adminname<<endl;
        cout<<"Admin age: "<<admine<<endl;
        fa1.print();
    }
};
class Teacher:public Faculty{
protected:
    string teachername;
    class Faculty f2;
public:
    Teacher(){teachername="Yesyou";}
    Teacher(Faculty &f2,string tchnm){teachername=tchnm;}
    void print(){
        cout<<"Teavher name: "<<teachername<<endl;
        f2.print();
    }
};



class Student:public Person{
friend class Undergarduate;
friend class Graduated;
protected:
    int year;
    string major;
    class Person p2;
public:
    Student(){year=2004;major="Telebe";}
    Student(Person &p2,string mj,int yr){major=mj;year=yr;}
    void print(){
        cout<<"Student year: "<<year<<endl;
        cout<<"Student major: "<<major<<endl;
        p2.print();
    }
};
class Undergarduate:public Student{
protected:
    int gpa;
    class Student st1;
public:
    Undergarduate(){gpa=0;}
    Undergarduate(Student &st1,int gp){gpa=gp;}
    void print(){
        cout<<"Undergarted student GPA: "<<gpa<<endl;
        st1.print();
    }
};
class Graduted: public Student{
protected:
    string grphone;
    Student st2;
public:
    Graduted(){grphone="502068605";}
    Graduted(Student &st2,string gnm){grphone=gnm;}
    void print(){
        cout<<"Graduated student Phone number: "<<grphone<<endl;
        st2.print();
    }
};



int main(){
    Person pr("H",18);
    Student st(pr,"qapici",2000);
    Faculty fc(st,"salam","sagol");
    Graduted gr(st,"0502068605");
    gr.print();
}