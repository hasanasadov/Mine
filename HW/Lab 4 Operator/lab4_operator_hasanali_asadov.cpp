#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int check(int n1,int n2,int n3){
    if((n1>23 || n1<0) || (n2>59 || n2<0) || (n3>59 || n3<0)){
        cout<<"I said enter corretlyyyyyy!!!!!!"<<endl;
        return 0;
    }
    else{return 1;}
}
class Time{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time(){hour=0;minute=0;second=0;}
        Time(int mn,int nm,int se){hour=mn;minute=nm;second=se;}
        void printTime(){cout<<setfill('0')<<setw(2)<<hour<<":"<<setfill('0')<<setw(2)<<minute<<":"<<setfill('0')<<setw(2)<<second<<endl;}
        Time operator+(const Time& d){
            Time rec;
            rec.second=this->second+d.second;
            rec.minute=this->minute+d.minute;
            rec.hour=this->hour+d.hour;
            if(rec.second>=60){rec.minute+=1;rec.second-=60;}
            if(rec.minute>=60){rec.hour+=1;rec.minute-=60;}
            if(rec.hour>=24 && rec.hour<48){cout<<"1 day ";rec.hour-=24;}
            if(rec.hour>=48){cout<<"2 day ";rec.hour-=48;}
            return rec;
        }
        bool operator==(const Time& d1){
            if (hour==d1.hour && minute==d1.minute && second==d1.second){return true;}
            else{return false;}}
        bool operator<(const Time& d2){
            if(hour<d2.hour){return true;}
            if(hour==d2.hour && minute<d2.minute){return true;}
            if(hour==d2.hour && minute==d2.minute && second<d2.second){return true;}
            return false;}
        friend ostream &operator<<(ostream &display, Time& d3){
            display<<setfill('0')<<setw(2)<<d3.hour<<":"<<setfill('0')<<setw(2)<<d3.minute<<":"<<setfill('0')<<setw(2)<<d3.second<<endl;
            return display;}
        friend istream &operator>>(istream &input, Time& d4){
            input>>d4.hour>>d4.minute>>d4.second;
            return input;}
};
int main(){
    int n1,n2,n3,n4,n5,n6;
    cout<<"\n!!!!!!!!!!!!!!!!\nYou will enter 2 times,PLEASE ENTER BIGGER FIRST and \nenter times CORRECTLY (otherwise program will be stopped!!!)"<<endl;
    
    cout<<"enter the 1st hour,minute,second:  "<<endl;cin>>n1>>n2>>n3;
    if (check(n1,n2,n3)==0){return 0;}
    Time t1(n1,n2,n3); t1.printTime();
    
    cout<<"\nenter the 2nd hour,minute,second:  "<<endl;cin>>n4>>n5>>n6;
    if (check(n4,n5,n6)==0){return 0;}
    Time t2(n4,n5,n6); t2.printTime();
    Time t3;
    cout<<"\nFirst time:  ";t1.printTime();
    cout<<"Second time:  ";t2.printTime();
    cout<<"the sum of times:   "; t3=t1+t2; t3.printTime();
    
    cout<<"\nchecking equalization:   ";
    if (t1==t2){cout<<"they are equal"<<endl;}
    else{cout<<"they are not equal"<<endl;}

    cout<<"checking bigger or not:   ";
    if(t1<t2){cout<<"Second time is bigger\n"<<endl;}
    else{cout<<"First Time is bigger\n"<<endl;}
}