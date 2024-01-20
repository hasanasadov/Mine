#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string firstName;
    string lastName;
    int age;
    string phone;
public:
    Person(string firstName, string lastName, int age, string phone) : firstName(firstName), lastName(lastName), age(age), phone(phone) {}
    virtual void display() {
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "Age: " << age << endl;
        cout << "Phone: " << phone << endl;
    }
};

class Faculty : public Person {
private:
    string department;
public:
    Faculty(string firstName, string lastName, int age, string phone, string department) : Person(firstName, lastName, age, phone), department(department) {}
    void display() {
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "Age: " << age << endl;
        cout << "Phone: " << phone << endl;
        cout << "Department: " << department << endl;
    }
};

class Student : public Person {
private:
    string major;
public:
    Student(string firstName, string lastName, int age, string phone, string major) : Person(firstName, lastName, age, phone), major(major) {}
    void display() {
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "Age: " << age << endl;
        cout << "Phone: " << phone << endl;
        cout << "Major: " << major << endl;
    }
};

int main() {
    Person* person1 = new Person("John", "Doe", 30, "555-1234");
    Faculty* faculty1 = new Faculty("Jane", "Smith", 45, "555-5678", "Computer Science");
    Student* student1 = new Student("Mike", "Jones", 20, "555-4321", "Biology");

    person1->display();
    faculty1->display();
    student1->display();

    delete person1;
    delete faculty1;
    delete student1;

    return 0;
}
