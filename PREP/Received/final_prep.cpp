#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

// LAB WORK 1
// QUESTION 1

/*
int main(){
    int a,b,c;
    cout<<"Enter coefficients:\n";
    cin>>a>>b>>c;
    double d=(b*b-4*a*c);
    double x1=(-b+sqrt(d))/(2*a);
    double x2=(-b- sqrt(d))/(2*a);
    cout<<x1<<endl;
    cout<<x2<<endl;
}
*/

// QUESTION 2
/*
int main(){
    cout<<"Enter number:\n";
    int a;
    cin>>a;
    switch(a%2){
        case 0:
        cout<<"It is even\n";
        break;
        case 1:
        cout<<"It is odd";
        break;
    }
}
*/

// Question 3
/*
int* sortinggg(int* arr){
    int max,temp ;
    int num=sizeof(arr)/sizeof(int);
    for(int i=0;i<num-1;i++){
        max=i;
        for(int j=i+1;j<num;j++){
            if (arr[j]>arr[max]){
                max=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }
    return (arr);
}

int main(){
    int num;
    cout<<"enter number of elements in an array:\n";
    cin>>num;
    int arr[num];
    int a;
    for(int i=0;i<num;i++){
        cout<<"Enter an element: ";
        cin>>a;
        arr[i]=a;
    }

    cout<<"printing:\n";
    for(int i=0;i<num;i++){
        cout<<arr[i]<<' ';
    }

    //sorting

    int max,temp ;
    for(int i=0;i<num-1;i++){
        max=i;
        for(int j=i+1;j<num;j++){
            if (arr[j]>arr[max]){
                max=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }


    int *arr2;
    arr2=sortinggg(arr);
    cout<<"\nprinting after sorting:\n";
    for(int i=0;i<num;i++){
        cout<<arr2[i]<<' ';
    }
}
*/

// LABWORK 1 INTRO TO CLASSES
// QUESTION 1
/*
class EquilateralTriangle{
    private:
    int side;
    public:
    int perimeter(){
        return 3*side;
    }
    double area(){
        double a=sqrt(3)*pow(side,2)/4;
        return a;
    }
    EquilateralTriangle(int s=1){
        side=s;
    }
};

int main(){
    EquilateralTriangle s1;
    EquilateralTriangle s2(7);
    cout<<"Perimeters:\n";
    cout<<s1.perimeter()<<endl;
    cout<<s2.perimeter()<<endl;
    cout<<"Areas:\n";
    cout<<s1.area()<<endl;
    cout<<s2.area()<<endl;
}
*/

// TIME CLASS
/*
class Time{
    private:
    int hour;
    int minute;
    int second;
    public:
    void settime(int h,int m,int s){
        hour=h;
        minute=m;
        second=s;
    }
    Time(int ho=0,int min=0,int sec=0){
        hour=ho;
        minute=min;
        second=sec;
    }
    void print(){
        cout<<setfill('0')<<setw(2)<<hour<<":"<<setfill('0')<<setw(2)<<minute<<":"<<setfill('0')<<setw(2)<<second<<endl;
    }

};


int main(){
    int a,b,c;
    cout<<"enter hour: ";
    cin>>a;
    while(a<0 || a>23){
        cout<<"enter hour again: ";
        cin>>a;
    }
    cout<<"enter minute: ";
    cin>>b;
    while(b<0 || b>59){
        cout<<"enter minute again: ";
        cin>>b;
    }
    cout<<"enter second: ";
    cin>>c;
    while(c<0 || c>59){
        cout<<"enter second again: ";
        cin>>c;
    }
    Time t1(a,b,c);
    t1.print();

}
*/

// CASCADED FUNCTION CALLS
/*
class Time{
    private:
    int hour,minute ,second;
    public:
    Time(int=0,int=0,int=0);
    Time &settime(int,int,int);
    Time &sethour(int);
    Time &setsecond(int);
    Time &setminute(int);
    int gethour();
    int getminute();
    int getsecond();
    void print();
};

Time::Time(int h,int m,int s){
    settime(h,m,s);
}

Time &Time::settime(int h,int m,int s){
    sethour(h);
    setminute(m);
    setsecond(s);
    return *this;
}

Time &Time::sethour(int h){
    if(h>=0 && h<24){
        hour=h;
    }
    h=0;
    return *this;
}

Time &Time::setminute(int m){
    if(m>=0 && m<59){
        minute=m;
    }
    m=0;
    return *this;
}

Time &Time::setsecond(int s){
    if(s>=0 && s<59){
        second=s;
    }
    s=0;
    return *this;
}

void Time::print(){
    cout<<setfill('0')<<setw(2)<<hour<<':'<<setfill('0')<<setw(2)<<minute<<':'<<setfill('0')<<setw(2)<<second<<'\n';
}


int main(){
    Time t1;
    t1.sethour(20).setminute(55).setsecond(88);
    t1.print();
}
*/

// LAB WORK 3 COMPOSITION
/*
class Date{
    private:
    int day,month,year;
    public:
    Date(int a=21,int b=12,int c=2004){
        day=a;
        month=b;
        year=c;
    }
    void print(){
        cout<<day<<'.'<<month<<'.'<<year;
    }
};

class Course{
    private:
    int code;
    string name;
    public:
    Course(int a=1234,string b="Physics"){
        code=a;
        name=b;
    }
    void print(){
        cout<<" Course Code: "<<code<<endl;
        cout<<"Course Name: "<<name<<endl;
    }
};

class Student{
    private:
    string name;
    Course courseexam;
    Date examdate;
    int grade;
    public:
    Student(string a,Course b, Date c,int d){
        name=a;
        courseexam=b;
        examdate=c;
        grade=d;
    }
    void print(){
        cout<<"Name: "<<name<<endl;
        courseexam.print();
        cout<<"Exam date: ";
        examdate.print();
        cout<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};


int main(){
    Course c1;
    Date d1;
    Student s1("Abbaszade Nermin",c1,d1,99);
    s1.print();
}
*/

// ASSIGNMENT FRIEND FUNCTION
/*
class Square;

class Circle{
    private:
    int r;
    public:
    double area(){
        double a=M_PI*r*r;
        return a;
    }
    double circumference(){
        double c=2*M_PI*r;
        return c;
    }
    Circle(int a=1){
        r=a;
    }
    friend int add(Circle,Square);
};

class Square{
    private:
    int side;
    public:
    Square(int a=1){
        side=a;
    }
    int area(){
        return side*side;
    }
    friend int add(Circle,Square);
};

int add(Circle a,Square b){
    return a.r+b.side;
}

int main(){
    Circle c1;
    Circle c2(3);
    Square s1(6);
    int a=add(c1,s1);
    cout<<a<<endl;
}
*/

// LAB WORK 4 FRIEND CLASSES AND THIS POINTER
// QUESTION 1
/*
class teacher;

class student{
    private:
    int id,gpa;
    string name;
    public:
    student(int a=1234,string b="lale",int c=78){
        id=a;
        name=b;
        gpa=c;
    }
    void print(){
        cout<<"Name: "<<name<<endl<<"id: "<<id<<endl<<"gpa: "<<gpa<<endl;
    }
    friend class teacher;
};

class teacher{
    public:
    void change(student& a,int x){
        a.gpa=x;
    }
};

int main(){
    student s1;
    teacher t1;
    s1.print();
    t1.change(s1,33);
    cout<<endl;
    s1.print();
}
*/

// QUESTION 2
/*
class circle{
    private:
    int r;
    public:
    circle(int rad=2){
        r=rad;
    }
    double area(){
        double d=M_PI*r*r;
        return d;
    }
    void compare(circle c2){
        if(this->area()>c2.area()){
            cout<<"C1>C2";
        }
        else if(this->area()==c2.area()){
            cout<<"C1=C2";
        }
        else{
            cout<<"C1<C2";
        }
    }
};


int main(){
    circle c1(5);
    circle c2(23);
    c1.compare(c2);
}
*/

// LAB WORK 4 OPERATOR OVERLOADING
/*
class Time{
    private:
    int hour,minute,second;
    public:
    Time(int a=2,int b=23,int c=35){
        hour=a;
        minute=b;
        second=c;
    }
    friend istream &operator>>(istream &input,Time &tester){
        cout<<"Enter hour: ";
        input>>tester.hour;
        while(tester.hour<0 || tester.hour>23){
            cout<<"Enter hour again: ";
            input>>tester.hour;
        }
        cout<<"Enter minute: ";
        input>>tester.minute;
        while(tester.minute<0 || tester.minute>59){
            cout<<"Enter minute again: ";
            input>>tester.minute;
        }
        cout<<"Enter second; ";
        input>>tester.second;
        while(tester.second<0 || tester.second>59){
            cout<<"Enter second again: ";
            input>>tester.second;
        }
        return input;
    }
    friend ostream &operator<<(ostream &output,Time &tester){
        output<<setfill('0')<<setw(2)<<tester.hour<<':'<<setfill('0')<<setw(2)<<tester.minute<<':'<<setfill('0')<<setw(2)<<tester.second<<endl;
        return output;
    }
    Time operator-(Time &t2){
        Time t3;
        if(second<t2.second){
            minute=minute-1;
            second=second+60;
        }
        t3.second=second-t2.second;
        if(minute<t2.minute){
            hour=hour-1;
            minute=minute+60;
        }
        t3.minute=minute-t2.minute;
        t3.hour=hour-t2.hour;
        return t3;
    }
    bool operator==(Time &t2){
        if(second==t2.second && minute==t2.minute && hour==t2.hour){
            return true;
        }
        else{
            return false;
        }
    }
    bool operator>(Time &t2){
        if(hour>t2.hour){
            return true;
        }
        else if(hour==t2.hour && minute>t2.minute){
            return true;
        }
        else if(hour==t2.hour && minute==t2.minute && second>t2.second){
            return true;
        }
        else{
            return false;
        }
    }
};



int main(){
    Time t1;
    cin>>t1;
    cout<<"Time t1: ";
    cout<<t1;
    Time t2(2,32,53);
    cout<<"Time t2: ";
    cout<<t2;
    Time t3=t1-t2;
    cout<<"Time t3: ";
    cout<<t3;
    if(t1>t2){
        cout<<"T1>T2";
    }
    else if(t1==t2){
        cout<<"T1=T2";
    }
    else{
        cout<<"T1<T2";
    }
}
*/

//  MONTH OPERATOR OVERLOADING
/*
class month{
    private:
    string name;
    int monthnumber;
    public:
    string arr[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    month(int num=1){
        monthnumber=num;
        name=arr[num-1];
    }
    month(string ad){
        name=ad;
        for(int i=0;i<12;i++){
            if(arr[i]==ad){
                monthnumber=i+1;
            }
        }
    }
    void print(){
        cout<<"Number: "<<monthnumber<<endl<<"Name: "<<name<<endl;
    }
    //PREFIX ++
    month operator++(){
        month temp;
        ++monthnumber;
        if(monthnumber==13){
            monthnumber=1;
        }
        temp.monthnumber=monthnumber;
        name=arr[monthnumber-1];
        temp.name=arr[monthnumber-1];
        return temp;
    }
    //POSTFIX ++
    month operator++(int){
        month temp;
        temp.monthnumber=monthnumber++;
        temp.name=arr[monthnumber-2];
        if(monthnumber==13){
            monthnumber=1;
        }
        name=arr[monthnumber-1];
        return temp;
    }
    //PREFIX --
    month operator--(){
        month temp;
        --monthnumber;
        if(monthnumber==0){
            monthnumber=12;
        }
        temp.monthnumber=monthnumber;
        name=arr[monthnumber-1];
        temp.name=arr[monthnumber-1];
        return temp;
    }
    //POSTFIX ++
    month operator--(int){
        month temp;
        temp.monthnumber=monthnumber--;
        temp.name=arr[monthnumber];
        if(monthnumber==0){
            monthnumber=12;
        }
        name=arr[monthnumber-1];
        return temp;
    }
    friend istream &operator>>(istream &input,month &tester){
        string arr[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
        cout<<"If you want to enter month name press 1 otherwise press 2: ";
        int num;
        input>>num;
        if(num==1){
            cout<<"Enter month name: ";
            input>>tester.name;
            for(int i=0;i<12;i++){
            if(arr[i]==tester.name){
                tester.monthnumber=i+1;
            }
        }
        }
        else{
            cout<<"Enter month number: ";
            input>>tester.monthnumber;
            tester.name=arr[tester.monthnumber-1];
        }
        return input;
    }
    friend ostream &operator<<(ostream &output,month &tester){
        output<<"Number: "<<tester.monthnumber<<endl<<"Name: "<<tester.name<<endl;
        return output;
    }
};

int main(){
    month m1;
    cin>>m1;
    cout<<m1;
    m1++;
    cout<<m1;
}
*/

// LAB WORK 6 INHERITANCE
// QUESTION 1
/*
class student{
    protected:
    string sname;
    int id;
    int age;
    public:
    student(string a="lale",int b=12345,int c=18){
        sname=a;
        id=b;
        age=c;
    }
    void print1(){
        cout<<"Student name: "<<sname<<endl;
        cout<<"Student id: "<<id<<endl;
        cout<<"Student age: "<<age<<endl;
    }
};

class undergraduate : public student{
    protected:
    string course_name;
    public:
    undergraduate(string a="lale",int b=12345,int c=18,string d="physics"){
        sname=a;
        id=b;
        age=c;
        course_name=d;
    }
    void print2(){
        cout<<"Student name: "<<sname<<endl;
        cout<<"Student id: "<<id<<endl;
        cout<<"Student age: "<<age<<endl;
        cout<<"Course name: "<<course_name<<endl;
    }
};

class graduate : public student{
    protected:
    string degree;
    public:
    graduate(string a="lale",int b=12345,int c=18,string d="master"){
        sname=a;
        id=b;
        age=c;
        degree=d;
    }
    void print3(){
        cout<<"Student name: "<<sname<<endl;
        cout<<"Student id: "<<id<<endl;
        cout<<"Student age: "<<age<<endl;
        cout<<"Degree: "<<degree<<endl;
    }
};

class freshman: public undergraduate{
    public:
    freshman(string a="lale",int b=12345,int c=18,string d="physics"){
        sname=a;
        id=b;
        age=c;
        course_name=d;
    }
};

class sophomore: public undergraduate{
    public:
    sophomore(string a="lale",int b=12345,int c=18,string d="physics"){
        sname=a;
        id=b;
        age=c;
        course_name=d;
    }
};

class junior: public undergraduate{
    public:
    junior(string a="lale",int b=12345,int c=18,string d="physics"){
        sname=a;
        id=b;
        age=c;
        course_name=d;
    }
};

class senior: public undergraduate{
    public:
    senior(string a="lale",int b=12345,int c=18,string d="physics"){
        sname=a;
        id=b;
        age=c;
        course_name=d;
    }
};

class doctoral:public graduate{
    public:
    doctoral(string a="lale",int b=12345,int c=18,string d="master"){
        sname=a;
        id=b;
        age=c;
        degree=d;
    }
};

class master:public graduate{
    public:
    master(string a="lale",int b=12345,int c=18,string d="doctoral"){
        sname=a;
        id=b;
        age=c;
        degree=d;
    }
};

int main(){
    freshman f1("gunel",321421,21,"math");
    f1.print2();
}
*/
// QUESTION 2
/*
class person{
    protected:
    string fname,lname,address,phone;
    public:
    person(string a="zulfuqar",string b="efendiyev",string c="ehmedli",string d="3843294312"){
        fname=a;
        lname=b;
        address=c;
        phone=d;
    }
};

class employee: public person{
    protected:
    int id;
    int age;
    public:
    employee(string a="zulfuqar",string b="efendiyev",string c="ehmedli",string d="3843294312",int e=123445,int f=25){
        fname=a;
        lname=b;
        address=c;
        phone=d;
        id=e;
        age=f;
    }
};

class manager: public employee{
    protected:
    string depname;
    int salary;
    public:
    manager(string a="zulfuqar",string b="efendiyev",string c="ehmedli",string d="3843294312",int e=123445,int f=25,string g="Library",int h=700){
        fname=a;
        lname=b;
        address=c;
        phone=d;
        id=e;
        age=f;
        depname=g;
        salary=h;
    }
    void print(){
        cout<<"Full name: "<<fname<<' '<<lname<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Phone: "<<phone<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Department name: "<<depname<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
    int getsalary(){
        return salary;
    }
};

int main(){
    manager m1("nermin","abbaszade","baki","53253334",12341,19,"banm",48934);
    manager m2;
    manager m3("nermin","abbaszade","baki","53253334",12341,19,"banm",800);
    manager m4("nermin","abbaszade","baki","53253334",12341,19,"banm",2900);
    manager m5("nermin","abbaszade","baki","53253334",12341,19,"banm",805);
    int arr[5]={m1.getsalary(),m2.getsalary(),m3.getsalary(),m4.getsalary(),m5.getsalary()};
    int max=m3.getsalary();
    for(int i=0;i<5;i++){
        if(arr[i]<max){
            max=arr[i];
        }
    }
    m4.print();
    cout<<"Highest salary: "<<max;
}
*/

// LAB WORK 7 POLYMORPHISM
/*
class shape{
    protected:
    int side;
};

class twodimen:public shape{
    public:
    virtual double getarea()=0;
};

class threedimen: public shape{
    public:
    virtual double getarea()=0;
    virtual double getvolume()=0;
};

class circle:public twodimen{
    public:
    circle(int a=1){
        side=a;
    }
    double getarea(){
        return M_PI*side*side;
    }
};

class square:public twodimen{
    public:
    square(int a=1){
        side=a;
    }
    double getarea(){
        return side*side;
    }
};

class triangle:public twodimen{
    public:
    triangle(int a=1){
        side=a;
    }
    double getarea(){
        return sqrt(3)*side*side/4;
    }
};

class sphere:public threedimen{
    public:
    sphere(int a=1){
        side=a;
    }
    double getarea(){
        return 4*pow(side,2)*M_PI;
    }
    double getvolume(){
        return 4/3*M_PI*pow(side,3);
    }
};

class cube:public threedimen{
    public:
    cube(int a=1){
        side=a;
    }
    double getarea(){
        return 6*side*side;
    }
    double getvolume(){
        return pow(side,3);
    }
};

int main(){
    circle cr1(3);
    square s1(4);
    triangle t1;
    cube c1(8);
    sphere sp(2);
    twodimen *arr[3]={&cr1,&s1,&t1};
    threedimen *arr2[2]={&c1,&sp};
    cout<<arr[0]->getarea();
}
*/

// CIRCLE POLY
/*
class circle{
    public:
    virtual double calc(double radius)=0;
};

class length: public circle{
    public:
    double calc(double radius){
        return 2*M_PI*radius;
    }
};

class area: public circle{
    public:
    double calc(double radius){
        return M_PI*radius*radius;
    }
};

class volume: public circle{
    public:
    double calc(double radius){
        return 4/3*M_PI*pow(radius,3);
    }
};

void Result(circle *p,int radius){
    double d=p->calc(radius);
    cout<<"Result: "<<d<<endl;
}

int main(){
    circle *p;
    length obj1;
    area obj2;
    volume obj3;
    int num;
    cout<<"Enter n(1-3): ";
    cin>>num;
    if(num==1){
        p=&obj1;
        Result(p,3);
    }
    else if(num==2){
        p=&obj2;
        Result(p,3);
    }
    else if(num==3){
        p=&obj3;
        Result(p,3);
    }
}
*/

int main()
{
    int a = 10, b = 0, c;
    // try block activates exception handling
    try
    {
        if (b == 0)
        {
            // throw custom exception
            throw "Division by zero not possible";
        }
        c = a / b;
            cout<<"result: "<<c<<endl;
    }
    catch (const char *ex) // catches exception
    {
        cout << ex << endl;
    }
    return 0;
}