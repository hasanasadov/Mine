#include <iostream>
using namespace std;
class Distance {
private:
    int kilometer;
    int meter;
public:
    Distance(){kilometer = 0;meter = 0;}
    Distance(int km, int m){kilometer = km;meter = m;}
    friend ostream &operator<<( ostream &output, const Distance &D ){
        output << " KM : " << D.kilometer << " M : " << D.meter;
        return output;}
    friend istream &operator>>( istream &input, Distance &D ) {
        input >> D.kilometer >> D.meter;
        return input;}
};

int main() {
    Distance D1(50, 900), D2(70, 700), D3;
    cout << "Enter the value of object : " << endl;
    cin >> D3;
    cout << "First Distance : " << D1 << endl;
    cout << "Second Distance : " << D2 << endl;
    cout << "Third Distance : " << D3 << endl;
    return 0;
}