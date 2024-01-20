#include <iostream>
using namespace std;
template<class T, int size>
class A{
public:
    T arr[size];
    void input(){cout<< "\nEnter Array elements(5): ";for(int i=0;i<size;i++){cin>>arr[i];}}
    void display(){cout << "Array elements: ";for(int a=0;a<size;a++){cout << arr[a] << "\t";}}
    void arrmax(){
        T max=arr[0];
        for(int i=0;i<size;i++){if(arr[i]>=max){max=arr[i];}}
        cout<<"\nmax is "<<max;
    }
    void arrmin(){
        T min=arr[0];
        for(int i=0;i<size;i++){if(arr[i]<=min){min=arr[i];}}
        cout<<"\nMin is "<<min;
    }
    void arraver(){
        T sum=0;
        for(int i=0;i<size;i++){sum=sum+arr[i];}
        cout<<"\nAverage is "<<sum/size<<endl;
    }

};
int main(){
    cout<<"For int press 1\nFor double press 2\nFor char press 3 : \n";int q;cin>>q;
    if(q==1){
        A<int,5> obj1;
        obj1.input();
        obj1.display();
        obj1.arrmax();
        obj1.arrmin();
        obj1.arraver();}
    if(q==2){
        A<double,5> obj2;
        obj2.input();
        obj2.display();
        obj2.arrmax();
        obj2.arrmin();
        obj2.arraver();}
    if(q==3){
        A<char,5> obj3;
        obj3.input();
        obj3.display();
        obj3.arrmax();
        obj3.arrmin();
        obj3.arraver();}
    return 0;
}