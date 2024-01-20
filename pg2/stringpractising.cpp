#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    string str1 = "hasanali";
    string str2 = "banana";
    string str3 = (str1);
    string str4(5, '&');
    string str5(str1, 2, 3);
    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;
    cout << "str3 = " << str3 << endl;
    cout << "str4 = " << str4 << endl;
    cout << "str5 = " << str5 << endl
         << endl;

    string str6 = str1 + str2;
    cout << "str6 (str1+str2) = " << str6 << endl;
    str1.append(str4);
    cout << "str1 (str1+str4 appended) = " << str1 << endl
         << endl;

    string str7 = "Programming";
    str7.push_back(' ');
    str7.push_back('C');
    str7.push_back('+');
    str7.push_back('+');
    cout << "str7 (push_backed)= " << str7 << endl;

    str2.pop_back();
    cout << "str2(pop_backed) = " << str2 << endl;

    str2.pop_back();
    cout << "str2(pop_backed 2_times) = " << str2 << endl;

    string str8 = "salam";
    cout << "\nstr8 = " << str8 << endl;
    cout << "size of str8 = " << str8.size() << endl;
    cout << "capacity of str8 = " << str8.capacity() << endl;
    cout << "length of str8 = " << str8.length() << endl;
    str8.resize(4);
    cout << "resize(4) for str8 = " << str8 << endl
         << endl;

    string str9 = "fd";
    cout << "str8 = " << str8 << endl;
    cout << "str9 = " << str9 << endl;
    str8.swap(str9);
    cout << "swapped str8 = " << str8 << endl;
    cout << "swapped str9 = " << str9 << endl;

    /*
    string get;
    getline(cin,get);
    cout<<get<<endl;
    */
}