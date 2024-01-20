#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string model;
    string color;
    double engine;
    int year;
public:
    Vehicle(){
        model = "NaN";
        color = "NaN";
        engine = 0;
        year = 0;
    }
    Vehicle(string model1, string color1, double engine1, int year1){
        model=model1;
        color=color1;
        engine=engine1;
        year=year1;
    }
    virtual void display(){
        cout << "Model: " << model  << endl;
        cout << "Color: " << color << endl;
        cout << "Engine: " << engine << endl;
        cout << "Year: " << year << endl;
    }
};

class Bus : public Vehicle {
private:
    int number;
public:
    Bus(){
        model = "NaN";
        color = "NaN";
        engine = 0;
        year = 0;
        number = 0;
    }
    Bus(string model2, string color2, double engine2, int year2, int number2){
        model=model2;
        color=color2;
        engine=engine;
        year=year2;
        number=number2;}
    void display(){
        cout << "Model: " << model  << endl;
        cout << "Color: " << color << endl;
        cout << "Engine: " << engine << endl;
        cout << "Year: " << year << endl;
        cout << "Number: " << number << endl;
    }
};

class Car : public Vehicle {
private:
    int maxspeed;
public:
    Car(){
        model = "NaN";
        color = "NaN";
        engine = 0;
        year = 0;
        maxspeed = 0;
    }
    Car(string model2, string color2, double engine2, int year2, int maxspeed2){
        model=model2;
        color=color2;
        engine=engine2;
        year=year2;
        maxspeed=maxspeed2;
    }
    void display() {
        cout << "Model: " << model  << endl;
        cout << "Color: " << color << endl;
        cout << "Engine: " << engine << endl;
        cout << "Year: " << year << endl;
        cout << "Max speed: " << maxspeed << endl;
    }
};

int main() {
    Vehicle v1("Mercedes", "Black", 5.5, 2002);
    Bus b1("Bmw", "White", 6.5, 2003, 125);
    Car c1("Ferrrari", "Red", 7.5, 2023, 345);

    v1.display();cout<<endl;
    b1.display();cout<<endl;
    c1.display();

    return 0;
}
