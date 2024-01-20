#include <iostream>
using namespace std;

class Person{
    protected:
        string fname, lname, address, phone;
    public:
        Person(){
            fname = "Kazuha";
            lname = "Kaedahara";
            address = "Inazuma";
            phone = "050-737-11-75";
        }
};
class Employee: public Person{
    protected:
        int id, age;
    public:
        Employee(){
            id = 250;
            age = 21;
        }
};
class Manager: public Employee{
    private:
        string department_name;
        int salary;
    public:
        friend Manager check(Manager m1, Manager m2, Manager m3, Manager m4, Manager m5);
        Manager(){
            department_name = "Crux";
            salary = 1000;
        }
        Manager(string f, string l, string ad, string p, int i, int a, string d, int s){
            fname = f;
            lname = l;
            address = ad;
            phone = p;
            id = i;
            age = a;
            department_name = d;
            salary = s;
        }
        void show(){
            cout << endl;
            cout << "Last name: " << lname << endl;
            cout << "First name: " << fname << endl;
            cout << "Age: " << age << endl;
            cout << "Address: " << address << endl;
            cout << "Phone: " << phone << endl;
            cout << "ID: " << id << endl;
            cout << "Department name: " << department_name << endl;
            cout << "Salary: " << salary << endl;
            cout << endl;
        }
};
Manager check(Manager m1, Manager m2, Manager m3, Manager m4, Manager m5){
    int arr[5] = {m1.salary, m2.salary, m3.salary, m4.salary, m5.salary};
    int max;
    for (int i = 0; i < 5; i++){
        if (arr[i] > max)
            max = arr[i];
    }
    if (m1.salary == max)
        return m1;
    if (m2.salary == max)
        return m2;
    if (m3.salary == max)
        return m3;
    if (m4.salary == max)
        return m4;
    if (m5.salary == max)
        return m5;
}
int main(){
    Manager M1;
    Manager M2("Arpelgo", "Mudo", "Fontaine", "050-545-31-08", 168, 19, "The Head Court", 5000);
    Manager M3("Miko", "Yae", "Inazuma", "051-990-41-12", 245, 500, "The Shrine Masteress", 8000);
    Manager M4("Locreme", "Kevin", "Valmorelle", "070-761-12-13",387, 14, "The Crimson Thunder", 200);
    Manager M5("Noceda", "Luz", "Multidimensional Realm", "055-375-78-49", 168, 15, "The Head Court", 40000);
    Manager M6 = check(M1, M2, M3, M4, M5);
    M1.show();
    M2.show();
    M3.show();
    M4.show();
    M5.show();
    M6.show();
}
