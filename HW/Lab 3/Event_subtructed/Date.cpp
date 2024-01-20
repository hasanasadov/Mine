#include "Date.h"

#include <iostream>
#include <iomanip>
using namespace std;

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
