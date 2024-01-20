#include <iostream>
using namespace std;
class Distance {
private:
    int kilometer;
    int meter;
public:
    Distance(){kilometer = 0;meter = 0;}
    Distance(int km, int m){kilometer = km;meter = m;}
    void displayDistance(){cout << " KM: " << kilometer << " M:" << meter <<endl;}
    // overloaded < operator
    bool operator <(const Distance& d){
        if(kilometer < d.kilometer){return true;}
        if(kilometer == d.kilometer && meter < d.meter){return true;}
        return false;
    }
};

int main() {
    Distance D1(15, 100), D2(5, 200), D3(15,300);
    if(D1<D2){cout<<"D1 is less than D2 "<<endl;}
    else{cout<<"D2 is less than D1 "<<endl;}
    if(D3<D1){cout<<"D3 is less than D1 "<<endl;}
    else{cout<<"D1 is less than D3 "<<endl;}
    return 0;
}