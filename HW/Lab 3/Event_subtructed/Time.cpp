#include "Time.h"

#include <iostream>
#include <iomanip>
using namespace std;

void Time::print(){
    cout<<hour<<':'<<minute<<endl;
}
Time::Time(){
    minute;
    hour;}
Time::Time(int ho,int mi){
    minute=mi;
    hour=ho;}