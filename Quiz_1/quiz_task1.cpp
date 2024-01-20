#include <iostream>
using namespace std;

class Distance
{
    int km;
    int m;

public:
    void print() { cout << "DISTANCE = " << km << " km " << m << " m " << endl; }
    Distance()
    {
        km = 1;
        m = 700;
    }
    Distance(int, int);
    Distance operator+(Distance &A)
    {
        Distance B;
        B.km = km + A.km;
        B.m = m + A.m;
        if (B.m > 999)
        {
            B.km += 1;
            B.m = B.m - 1000;
        }
        return B;
    }
    bool operator<=(Distance &A)
    {
        if (km <= A.km)
        {
            return true;
        }
        else if (km == A.km && m <= A.m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    friend ostream &operator<<(ostream &display, Distance &D2)
    {
        display << D2.km << D2.m << endl;
        return display;
    }
    friend istream &operator>>(istream &input, Distance &D3)
    {
        input >> D3.km >> D3.m;
        return input;
    }
};
Distance::Distance(int km_B, int m_B)
{
    km = km_B;
    m = m_B;
}

int main()
{
    int n1, n2;
    cout << "Enter KM  M" << endl;
    cin >> n1 >> n2;
    Distance obj1, obj2(n1, n2), obj3;
    obj3 = obj1 + obj2;
    cout << "Object1: ";
    obj1.print();
    cout << "Object2: ";
    obj2.print();
    cout << "Plus ";
    obj3.print();
    if (obj1 <= obj2)
    {
        cout << "First is LESS";
    }
    else
    {
        cout << "Second  is LESS";
    }
}