#include <iostream>
#include <string.h>
using namespace std;

class Author
{
    string first_name;
    string last_name;
    int phone;
    int age;

public:
    Author();
    Author(string, string, int, int);
    void printa();
};

Author::Author()
{
    first_name = "";
    last_name = "";
    phone = 0;
    age = 0;
}

Author::Author(string fn, string ln, int p, int a)
{
    first_name = fn;
    last_name = ln;
    phone = p;
    age = a;
}

class Book
{
private:
    string book_name;
    Author bookauthor;
    double price;
    int year;

public:
    Book(string, double, int, Author);
    void print()
    {
        cout << "Name of the Book : " << book_name << endl;
        cout << "Price : " << price << endl;
        cout << "Year : " << year << endl;
        bookauthor.printa();
    }
};
void Author::printa()
{
    cout << "Author: " << first_name << " " << last_name << endl;
    cout << "Phone number:" << phone << endl;
    cout << "Age: " << age << endl;
}
Book::Book(string bn, double pr, int yr, Author ba)
{
    book_name = bn;
    price = pr;
    year = yr;
    bookauthor = ba;
}

int main()
{
    Author A1("Hasanali", "Asadov", 502068605, 18);
    Book B1("Math", 100, 2015, A1);
    B1.print();
}