//HASANALI ASADOV PAM21.1
//Ayrilmis
#include <iostream>
#include <iomanip>
#include <string>

#include "Event.cpp"
#include "Date.cpp"
#include "Time.cpp"

using namespace std;

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
