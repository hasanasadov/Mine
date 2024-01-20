#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;

class Month{
    private:
        string name;
        int monthNumber;
    public:
        Month(){
            name="January";
            monthNumber=1;
        }
        Month(int i){
            string months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
            if (i>0 && i<=12){
                monthNumber=i;
                name=months[i-1];
            }
            else{
                cout<<"Invalid Number!!!\n";
            }
        }
        Month(string s){
            string months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
            for (int j=0;j<12;j++){
                if (months[j]==s){
                    monthNumber=j+1;
                    name=s;
                }
            }
        }
        Month &set(int n){
            if (n>0 && n<=12){
                this->monthNumber=n;
            }
            else{
                this->monthNumber=1;
            }
            return *this;
        }
        Month &set(string s){
            string months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
            for (int j=0;j<12;j++){
                if (months[j]==s){
                    this->name=months[j];
                    break;
                }
                else{
                    this->name="January";
                }
            }
            return *this;
        }
        void get(){
            cout<<"Month number: "<<monthNumber<<endl;
            cout<<"Month name: "<<name<<endl<<"\n";
        }
        void operator++(){ 
            string months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
            if (monthNumber>0 && monthNumber<12){
                monthNumber++;
                name=months[monthNumber-1];
            }
            else if (monthNumber==12){
                monthNumber=1;
                name="January";
            }
        }
        void operator--(){
           string months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
           if (monthNumber>1 && monthNumber<=12){
                monthNumber--;
                name=months[monthNumber-1];
           }
           else if(monthNumber==1){
                monthNumber=12;
                name="December";
           }
        }
        friend ostream &operator<<(ostream &output,Month &m){
            output<<"Month name: "<<m.name<<endl;
            output<<"Month number: "<<m.monthNumber<<endl;
            return output;
        }
        friend istream &operator>>(istream &input,Month &m){
            cout<<"\tEnter The Month Number:"<<endl;
            input>>m.monthNumber;
            cout<<"\tEnter The Month Name"<<endl;
            input>>m.name;
            return input;
        }
};

int main(){
    Month m1;
    Month m2(2);
    Month m3("March");
    Month m4;
    Month m5;
    m4.set(7).set("July");

    cout<<"m1 Data:"<<endl;
    m1.get();
    cout<<m1<<endl<<"\n";
    cout<<"m2 Data:"<<endl;
    m2.get();
    cout<<m2<<endl<<"\n";
    cout<<"m3 Data:"<<endl;
    m3.get();
    cout<<m3<<endl<<"\n";
    cout<<"m4 Data:"<<endl;
    m4.get();
    cout<<m4<<endl<<"\n";
    cout<<"Enter the Data of m5 CORRECTLY!!!:"<<endl;
    cin>>m5;
    cout<<"\nm5 Data:"<<endl;
    m5.get();
    cout<<m5<<endl<<"\n";
}