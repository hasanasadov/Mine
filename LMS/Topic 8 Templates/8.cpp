#include <iostream>
using namespace std;

/*
template <typename T>
void show(T data){cout<<data<<endl;}
int main(){
    show(25);
    show(17.38);
    show("Programming");
    return 0;
}*/

/*
template <class T>
T square(T number){return number * number;}
int main(){
    int myint;
    double mydouble;
    cout << "Enter an integer and a floating-point value: ";
    cin >> myint >> mydouble;
    cout << "Here are their squares: ";
    cout << square(myint) << " and "<< square(mydouble) << endl;
    return 0;
}*/

/*
template <typename T>
void swapVars(T &var1, T &var2){
    T temp;
    temp=var1;
    var1 = var2;
    var2 = temp;
}
int main(){
    char ch1, ch2;
    int i1, i2;
    double d1, d2;
    cout << "Enter two characters: ";cin >> ch1 >> ch2;
    swapVars(ch1, ch2);
    cout << ch1 << " " << ch2 << endl;
    cout << "Enter two integers: ";cin >> i1 >> i2;
    swapVars(i1, i2);
    cout << i1 << " " << i2 << endl;
    cout << "Enter two floating-point numbers: ";cin >> d1 >> d2;
    swapVars(d1, d2);
    cout << d1 << " " << d2 << endl;
    return 0;
}*/

/*
template <class T>
T sum(T val1, T val2){return val1 + val2;}
template <class T>
T sum(T val1, T val2, T val3){return val1 + val2 + val3;}
int main(){
    double num1, num2, num3;
    cout << "Enter two values: ";cin >> num1 >> num2;
    cout << "Their sum is " << sum(num1, num2) << endl;
    cout << "Enter three values: ";
    cin >> num1 >> num2 >> num3;
    cout << "Their sum is " << sum(num1, num2, num3) << endl;
    return 0;
}*/

/*
template <class T>
class Calculator{
private:
    T num1, num2;
public:
    Calculator(T n1, T n2){num1 = n1;num2 = n2;}
    void displayResult(){
    cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
    cout << "Addition is: " << add() << endl;
    cout << "Subtraction is: " << subtract() << endl;
    cout << "Product is: " << multiply() << endl;
    cout << "Division is: " << divide() << endl;
    }
    T add(){return num1 + num2;}
    T subtract(){return num1 - num2;}
    T multiply(){return num1 * num2;}
    T divide(){return num1 / num2;}
    };
int main(){
    Calculator<int> intCalc(5, 2);
    Calculator<float> floatCalc(2.4, 1.2);
    cout << "Int results:" << endl;
    intCalc.displayResult();
    cout << endl << "Float results:" << endl;
    floatCalc.displayResult();
    return 0;
}*/

/*
template<class T1, class T2>
class A{T1 a;T2 b;
public:
    A(T1 x,T2 y){a = x;b = y;}
    void display(){cout << "Values of a and b are : " << a<<" ,"<<b<<endl;}
};
int main(){
    A<int,float> obj1(5,3.5);
    obj1.display();
    A<int,int> obj2(10,7);
    obj2.display();
    return 0;
}*/

/*/
template<class T, int size>
class A{
public:
T arr[size];
    void insert(){
        int n =1;
        for (int i=0;i<size;i++){arr[i] = n;n++;}
    }
    void display(){for(int i=0;i<size;i++){cout << arr[i] << " ";}}
};
int main()
{
    A<int,10> obj;
    obj.insert();
    obj.display();
    return 0;
}*/

template<class T1,class T2>
class A{
      T1 a;
      T2 b;
      public:
      void display(){cout <<a<<" "<<b<<endl;}
      T2 area(){return a*b;}
      T2 curcim(){return (a+b)*2;}
      A(T1 x,T2 y){a = x;b = y;}
};

int main(){
      int a;double b;
      cout<<"Values of a and b are : ";cin>>a;cin>>b;cout<<endl;
      A<int,double> obj1(a,b);
      obj1.display();
      cout<<obj1.area()<<endl;
      cout<<obj1.curcim();
}