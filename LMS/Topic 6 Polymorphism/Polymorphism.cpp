#include <iostream>
using namespace std;
/*
class Addition{
public:
    void sum(int a, int b){cout<<a+b;}
    void sum(int a, int b, int c){cout<<a+b+c;}
};

int main(){
    Addition obj;
    obj.sum(10, 20);
    cout<<endl;
    obj.sum(10, 20, 30);
    cout<<endl;
}*/

/*

class Base{
public:
    void show(){cout<<"Base class";}
};

class Derived:public Base{
public:
    void show(){cout<<"Derived Class";}
};

int main(){
    Base b;
    Derived d; 
    b.show();
    cout<<endl;
    d.show();
    cout<<endl;
}*/

/*

class A{
public:
    virtual void show(){cout<<"Base class \n";}
};

class B : public A{
public:
    void show(){cout<<"Derive class \n";}
};

int main(){
    A aobj;
    B bobj;
    A *ptr;
    ptr=&aobj;
    ptr->show(); // call base class function
    ptr=&bobj;
    ptr->show(); // call derive class function
}*/
/*
class Polygon {
protected:
    int width, length;
public:
    void set_values(int a,int b){width=a;length=b; }
};

class Rectangle: public Polygon {
public:
    int area(){return width*length; }
};

class Triangle: public Polygon {
public:
    int area(){return width*length/2; }
};

int main () {
    Rectangle rect;
    Triangle trgl;
    Polygon * poly1 = &rect;
    Polygon * poly2 = &trgl;
    poly1->set_values (4,5);
    poly2->set_values (4,5);
    cout << rect.area() << '\n';
    cout << trgl.area() << '\n';
    return 0;
}
*/

/*
class Polygon{
protected:
    int width,length;
public:
    void set_values(int a, int b){width=a; length=b;}
    virtual int area(){return 0;}
};

class Rectangle:public Polygon {
public:
    int area(){return width * length; }
};

class Triangle:public Polygon {
public:
    int area(){return (width * length / 2); }
};

int main(){
    Rectangle rect;
    Triangle trgl;
    Polygon poly;
    Polygon *poly1 = &rect;
    Polygon *poly2 = &trgl;
    Polygon *poly3 = &poly;
    poly1->set_values (4,5);
    poly2->set_values (4,5);
    poly3->set_values (4,5);
    cout << poly1->area() <<endl;
    cout << poly2->area() <<endl;
    cout << poly3->area() <<endl;
    return 0;
}
*/

//ABSTRACT
/*
class Polygon {
protected:
    int width, length;
public:
    void set_values(int a, int b){width=a; length=b;}
    virtual int area()=0;
};
class Rectangle: public Polygon {
public:
    int area(){return (width * length); }
};
class Triangle: public Polygon {
public:
int area(){return (width * length / 2); }
};
int main () {
    Rectangle rect;
    Triangle trgl;
    Polygon * poly1 = &rect;
    Polygon * poly2 = &trgl;
    poly1->set_values (5,10);
    poly2->set_values (5,10);
    cout << poly1->area() << '\n';
    cout << poly2->area() << '\n';
    return 0;
}*/

/*
class Polygon {
protected:
    int width, length;
public:
    void set_values(int a, int b){width=a; length=b; }
    virtual int area()=0;
    void printarea(){cout << this->area() <<endl; }
};
class Rectangle: public Polygon {
public:
    int area(){return (width * length); }
};
class Triangle: public Polygon {
public:
    int area(){return (width * length / 2); }
};
int main(){
    Rectangle rect;
    Triangle trgl;
    Polygon * poly1 = &rect;
    Polygon * poly2 = &trgl;
    poly1->set_values (5,10);
    poly2->set_values (5,10);
    poly1->printarea();
    poly2->printarea();
    return 0;
}*/

//DYNAMIC ALLOC
/*
class Polygon {
protected:
    int width, length;
public:
    Polygon (int a,int b):width(a),length(b){}
    virtual int area()=0;
    void printarea(){cout << this->area() << '\n'; }
};
class Rectangle: public Polygon {
public:
    Rectangle(int a,int b) : Polygon(a,b) {}
    int area(){return width*length; }
};
class Triangle: public Polygon {
public:
    Triangle(int a,int b) : Polygon(a,b) {}
    int area(){return width*length/2; }
};
int main () {
    Polygon * poly1 = new Rectangle (4,5);
    Polygon * poly2 = new Triangle (4,5);
    poly1->printarea();
    poly2->printarea();
    delete poly1;
    delete poly2;
    return 0;
}
*/

