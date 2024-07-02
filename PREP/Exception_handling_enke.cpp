#include <iostream>
#include <exception>
using namespace std;

//Task2

class Date{
private:
    int year;
    int month;
    int day;
public:
    Date(int y,int m,int d){year=y;month=m;day=d;};
    void InvalidYear(){
        try{
            if(year<2024 && year>-1){throw year;}
            else{throw "";}
        }
        catch (int x){cout <<"Year is "<<year<<endl;} 
        catch(...){cout<<"Year is "<<year<<" and It is Invalid!!!\n";}
    }
    void Invalidday(){
        try{
            if(day<32 && day>0){throw day;}
            else{throw "";}
        }
        catch (int x){cout <<"Day is "<<day<<endl;} 
        catch(...){cout<<"Day is "<<day<<" and It is Invalid!!!\n";}
    }
    void InvalidMonth(){
        try{
            if(month<13 && month>0){throw month;}
            else{throw "";}
        }
        catch (int x){cout <<"Month is "<<month<<endl;} 
        catch(...){cout<<"Month is "<<month<<" and It is Invalid!!!\n";}
    }
};
int main(){
    Date d1(2023,13,35);
    d1.InvalidYear();d1.Invalidday();d1.InvalidMonth();
}