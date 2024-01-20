#include "Event.h"
#include "Date.h"
#include "Time.h"

#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

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