#include <iostream>
using namespace std;
class Distance {
private:
    int kilometer;
    int meter;
public:
    // Constructors
    Distance(){kilometer = 0;meter = 0;}
    Distance(int km, int m){kilometer = km;meter = m;}
    void operator = (const Distance &D ){kilometer = D.kilometer;meter = D.meter;}
    void Display(){cout << " KM: " << kilometer << " M:" << meter << endl;}
};

int main() {
    Distance D1(20, 500), D2(50, 800);
    cout << "First Distance : ";
    D1.Display();
    cout << "Second Distance :";
    D2.Display();
    // use assignment operator
    D2 = D1;
    cout << "First Distance :";
    D2.Display();
    return 0;
}