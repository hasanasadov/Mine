#include <iostream>
#include <iomanip>
using namespace std;

class Time{
    private:
        int hours, minutes, seconds;
    public:
        Time(){
            hours = 10;
            minutes = 24;
            seconds = 10;
        }
        Time(int h, int m, int s){
            hours = h;
            minutes = m;
            seconds = s;
        }
        void printTime(){
            cout << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << seconds << endl;  
        }
        Time operator - (Time& T1){
            Time T2;
            while ((minutes - T1.minutes) <= 0 || (seconds - T1.seconds) <= 0){
                if ((seconds - T1.seconds) < 0){
                    minutes -= 1;
                    seconds += 60;
                }
                if ((minutes - T1.minutes) < 0){
                    hours -= 1;
                    minutes += 60;
                }
            }
            T2.hours = hours - T1.hours;
            T2.minutes = minutes - T1.minutes;
            T2.seconds = seconds - T1.seconds;
            return T2;
        }
        bool operator == (Time& T1){
            int sum = hours*3600 + minutes*60 + seconds;
            int sum1 = T1.hours*3600 + T1.minutes*60 + T1.seconds;
            if (sum == sum1)
                return true;
            else
                return false;
        }
        bool operator > (Time& T1){
            int sum = hours*3600 + minutes*60 + seconds;
            int sum1 = T1.hours*3600 + T1.minutes*60 + T1.seconds;
            if (sum > sum1)
                return true;
            else
                return false;
        }
        friend istream &operator >> (istream &input, Time& T1){
            input >> T1.hours >> T1.minutes >> T1.seconds;
            return input;
        }
        friend ostream &operator << (ostream &output, Time& T1){
            output << setw(2) << setfill('0') << T1.hours << ":" << setw(2) << setfill('0') << T1.minutes << ":" << setw(2) << setfill('0') << T1.seconds << endl;
            return output;
        }
};
int main(){
    Time T1;
    Time T2(12, 3, 2);
    T1.printTime();
    cout << T2;
    Time T3 = T2 - T1;
    cout << T3;
    Time T4;
    cout << "Enter the time (ex: 5 17 20): ";
    cin >> T4;
    cout << T4;
    if (T1 == T4)
        cout << "T1 and T2 are equal" << endl;
    else  
        cout << "T1 and T2 are not equal" << endl;  
}