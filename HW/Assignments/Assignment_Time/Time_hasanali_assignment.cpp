#include <iostream>
#include <iomanip>
using namespace std;
class Time{
    int hour,minute,second;
    public:
        Time();
        Time(int,int,int);
        void show();
};
Time::Time(){
    hour=0;
    minute=0;
    second=0;}
Time::Time(int h, int m, int s){
    hour=h;
    minute=m;
    second=s;}

void Time::show(){
    cout<<setfill('0')<<setw(2)<<hour<<":";
    cout<<setfill('0')<<setw(2)<<minute<<":";
    cout<<setfill('0')<<setw(2)<<second<<endl;
}
int main(){
    int a,b,c;
    Time t1;
    Time t2(11,9,3);
    cout << "Time 1: " ;
    t1.show();
    cout << "Time 2: " ;
    t2.show();

    cout << "enter hour: ";
    cin >> a ;
    if (a>=24 || a<0){
        cout <<"wrong input for hour,try again from start"<< endl;
        return 0;
    }

    cout << "enter minute: ";
    cin >> b ;
    if (b>=60 || b<0){
        cout <<"wrong input for minute,try again from start"<< endl;
        return 0;
    }

    cout << "enter second: ";
    cin >> c ;
    if (c>=60 || c<0){
        cout <<"wrong input for second,try again from start"<< endl;
        return 0;
    }

    
    Time t3(a,b,c);
    cout << "Time 3: " ;
    t3.show() ;
    return 0;t1.show();
}