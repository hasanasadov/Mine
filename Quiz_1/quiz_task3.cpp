// Hasanali_Asadov_PAM21.1
#include <iostream>
#define USING_MATH_DEFINES
#include <cmath>
using namespace std;
class Circle;
class Triangle
{
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle()
    {
        side1 = 0;
        side2 = 0;
        side3 = 0;
    }
    Triangle(int, int, int);
    int Area()
    {
        double p = (side1 + side2 + side3) / 2;
        double A = sqrt(p * (p - side1) * (p - side2) * (p - side3));
        return A;
    }
    friend void Add(Circle, Triangle);
};
Triangle::Triangle(int s1, int s2, int s3)
{
    side1 = s1;
    side2 = s2;
    side3 = s3;
}

class Circle
{
private:
    double radius;

public:
    Circle() { radius = 0; }
    Circle(int);
    double Circumference() { return 2 * M_PI * radius; }
    friend void Add(Circle, Triangle);
};
Circle::Circle(int r) { radius = r; }

void Add(Circle objx, Triangle objy)
{
    cout << "Radius + side1 + side2 + side3 : " << objx.radius << " + " << objy.side1 << " + " << objy.side2 << " + " << objy.side3 << " = " << objx.radius + objy.side1 + objy.side2 + objy.side3;
}

int main()
{
    Circle obj1(5);
    Triangle obj2(3, 4, 5);
    cout << "The Circumference of the circle: " << obj1.Circumference() << endl;
    cout << "The Area of the triangle: " << obj2.Area() << endl;
    Add(obj1, obj2);
}
// Hasanali_Asadov_PAM21.1