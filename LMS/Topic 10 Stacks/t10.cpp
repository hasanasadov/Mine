#include <iostream>
#include <stack>
using namespace std;

//Stack
int main(){
    stack< int> myStack;
    for(int i = 1; i <=10; i++){
        cout << "Pushing " << i << endl;
        myStack.push(i);
    }
    cout << "The size of the stack is ";
    cout << myStack.size() << endl;
    for(int i = 1; i <=10; i++){
        cout << "Popping " << myStack.top() << endl;
        myStack.pop();
    }
    return 0;
}


//stack::emplace() function
/*
int main() {
    stack<int> s;
    for(int i = 1; i <=5; ++i){s.emplace(i);}
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}*/


//stack::empty() function
/*
int main() {
    stack<int> s;
    if (s.empty())
        cout << "Stack is empty." << endl;
    s.emplace(1);
    if (!s.empty())
        cout << "Stack is not empty." << endl;
    return 0;
}*/

//stack::operator= function (copy version)
/*
int main() {
    stack<int> s1;
    stack<int> s2;
    for (int i = 1; i <=5; ++i)
        s1.push(i);
    s2 = s1;
    cout << "Contents of stack s2" << endl;
    while (!s2.empty()) {
        cout << s2.top() << endl;
        s2.pop();
    }
    return 0;
}*/

//stack::operator= function (move version)
/*
int main() {
    stack<int> s1;
    stack<int> s2;
    for (int i = 1; i <=5; ++i)
        s1.push(i);
    cout << "Size of stack s1 before move operation = " << s1.size()<< endl;
    s2 = move(s1);
    cout << "Size of stack s1 after move operation = " << s1.size() << endl;cout << "Contents of stack s2" << endl;
    while (!s2.empty()) {
        cout << s2.top() << endl;
        s2.pop();
    }
    return 0;
}*/

//stack::pop() function
/*
int main() {
    stack<int> s;
    for (int i = 1; i<=5; ++i)
        s.emplace(i);
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}*/

//stack::push() function (copy version)
/*
int main() {
    stack<int> s;
    for (int i = 1; i <= 5; ++i)
        s.push(i);
    cout << "Stack contents are" << endl;
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}*/

//stack::push() function (move version)
/*
int main() {
    stack<int> s1;
    stack<int> s2;
    for (int i = 1; i <=5; ++i)
        s1.push(i);
    while (!s1.empty()) {
        s2.push(move(s1.top()));
        s1.pop();
    }
    cout << "Stack contents are" << endl;
    while (!s2.empty()) {
        cout << s2.top() << endl;
        s2.pop();
    }
    return 0;
}*/

//stack::size() function
/*
int main() {
    stack<int> s;
    cout << "Initial size of stack = " << s.size() << endl;
    for (int i = 1; i <=5; ++i)
        s.push(i);
    cout << "Stack size after push operation = " << s.size() << endl;
    return 0;
}*/

//stack::swap() function
/*
int main() {
    stack<int> s1;
    stack<int> s2;
    for (int i = 1; i <=5; ++i)
        s1.push(i);
    for (int i = 0; i < 3; ++i)
        s2.push(100 + i);
    s1.swap(s2);
    cout << "Contents of stack s1 after swap operation" << endl;
    while (!s1.empty()) {
        cout << s1.top() << endl;
        s1.pop();
    }
    cout << endl;
    cout << "Contents of stack s2 after swap operation" << endl;
    while (!s2.empty()) {
        cout << s2.top() << endl;
        s2.pop();
    }
    return 0;
}*/

//stack::top() function
/*
int main() {
    stack<int> s;
    for (int i = 1; i <=5; ++i)
        s.emplace(i);
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}*/