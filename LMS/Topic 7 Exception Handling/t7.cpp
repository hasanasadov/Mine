#include <iostream>
#include <exception>
using namespace std;


//RunError
/*
float division(int x, int y){return (x/y);}
int main(){
    int a = 50;
    int b = 0;
    float c;
        c = division(a, b);
        cout << c << endl;
    return 0;
}
*/

//Example 1
/*
float division(int x, int y) {
    if( y == 0 ) {
        throw "Attempted to divide by zero!";
    }
    return (x/y);
}
int main () {
    int a = 25;
    int b = 0;
    float c;
    try {
        c = division(a, b);
        cout << c << endl;
    }
    catch (const char* ex){cout << ex << endl;}
    return 0;
}*/

//Example 2
/*
int main(){
    int a=10, b=0, c;
    try{
        if(b == 0){
            throw "Division by zero not possible";
            c = a/b;
        }
    }
    catch(const char* ex) {cout<<ex<<endl;}
    return 0;
}*/

//Example 3 Handling
/*
int main(){
    int x = -1;
    cout << "Before try \n";
    try{
        cout << "Inside try \n";
        if(x < 0){
            throw x;
            cout << "After throw (Never executed) \n";
        }
    }
    catch (int x ){cout << "Exception Caught \n";}
    cout << "After catch (Will be executed) \n";
    return 0;
}*/

//Multiple catch Example 1
/*
int main(){
    try {
        throw 10;
    }
    catch (char *excp){cout << "Caught " << excp;}
    catch (...){cout << "Default Exception\n";}
    return 0;
}*/

//Using Multiple catch blocks Ex2
/*
int main(){
    try {
        throw 'a';
    }
    catch (int x) {cout << "Caught " << x;}
    catch (...) {cout << "Default Exception\n";}
    return 0;
}*/

//Using Multiple catch blocks Ex3
/*
int main(){
    int x[2] = {-1,2};
    for(int i=0; i<2; i++){
        int ex = x[i];
        try{
            if (ex > 0)
                throw ex;
            else
                throw 'x';
        }
    catch (int ex){cout << "Integer exception\n";}
    catch (char x){cout << "Character exception\n";}
    }
}*/


//Generalized catch block in C++ Ex1
/*
int main(){
    int x[2] = {-1,2};
    for(int i=0; i<2; i++){
        int ex=x[i];
        try{
            if (ex > 0)
                throw ex;
            else
                throw 'ex';
        }
    // generalised catch block
    catch (...){cout << "Special exception\n";}
    }
    return 0;
}*/

//Nest try/catch blocks
/*
int main(){
    try{throw 6;}
    catch (int a){
    cout << "An exception occurred!" << endl;
    cout << "Exception number is: " << a << endl;
    }
}*/

//Rethrowing an Exception (cont.)

void throwException(){
try{
    cout << "Function throwException throws an exception\n\n";
    throw exception(); // generate exception
}
catch (exception &){
    cout << "Exception handled in function throwException"<< "\nFunction throwException rethrows exception\n\n";
    throw; // rethrow exception for further processing
    }
    cout << "This also should not print\n\n";
}

int main(){
    try{
        cout << "main invokes function throwException\n";
        throwException();
        cout << "This should not print\n\n";
    }
    catch (exception &){cout << "Exception handled in main\n";}
    cout << "Program continues after catch in main\n";
}

//Stack Unwinding Ex
/*
#include <exception>
void f1(){
    cout<<"f1() start \n";
    throw 10;
    cout<<"f1() end ";
}
void f2() throw{
    cout<<"f2() start \n ";
    f1();
    cout<<"f2() end ";
}
void f3() {
    cout<<"f3() start \n ";
    try {f2();}
    catch (int i){cout<<"Caught exception "<<i<<endl;}
    cout<<"f3() end \n";
}
int main(){
    f3();
    return 0;
}*/

