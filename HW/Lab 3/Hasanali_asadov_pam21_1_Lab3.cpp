//HASANALI ASADOV PAM21.1
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Time{
    private:
        int minute;
        int hour;
    public:
        Time();
        Time(int,int);
        void print();
};
void Time::print(){
    cout<<hour<<':'<<minute<<endl;
}
Time::Time(){
    minute;
    hour;}
Time::Time(int ho,int mi){
    minute=mi;
    hour=ho;}

class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date();
        Date(int,int,int);
        void print();
};
void Date::print(){
    cout<<day<<'/'<<month<<'/'<<year<<endl;
}
Date::Date(){
    day;
    month;
    year;}
Date::Date(int dy, int mn, int yr){
    day=dy;
    month=mn;
    year=yr;}

class Event{
    private:
        string name;
        Date eventdate;
        Time eventtime;
    public:
        Event();
        Event(string ,Date ,Time );
        void print();
};
Event::Event(string ad,Date ed, Time et){
    name=ad;
    eventdate=ed;
    eventtime=et;
}
void Event::print(){
    cout<<name<<endl;
    eventdate.print();
    eventtime.print();
    cout<<endl;
}
Event::Event(){
    name;
    eventdate;
    eventtime;}

int main(){
    cout<<"Event Name:  ";
    string ad;
    cin>>ad;

    cout<<"Enter day/month/year    ";
    int dy,mn,yr;
    cin>>dy>>mn>>yr;

    cout<<"Enter hour and minute    ";
    int mi,ho;
    cin>>ho>>mi;
    Date d1(dy,mn,yr);
    Time t1(ho,mi);
    Event e1(ad,d1,t1);
    e1.print();
}
