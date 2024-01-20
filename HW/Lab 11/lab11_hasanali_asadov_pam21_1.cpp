#include <iostream>
#include <stack>
using namespace std;
void disp(stack <int> &s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){
    stack< int> s;
    stack< int> s1; //Temporart stack for exchange
    stack< int> s2; //Temporart stack for exchange
    stack< int> s3; //Temporart stack for exchange

    cout<<"Stack 1 ,we have '7' "<<endl;
    s.push(7);
    s1.push(7);
    s2.push(7);
    s3.push(7);
    //Insert
    int q;cout<<"Insert number : ";cin>>q;
    s.push(q);
    s1.push(q);
    s2.push(q);
    s3.push(q);

    cout<<"After insert We have :";disp(s);cout << endl;


    //Delete
    s1.pop();
    s2.pop();
    s3.pop();
    cout<<"\nNumber deleted successfully!  "<<endl;
    cout<<"After deleting We have :";disp(s1);cout << endl<<endl;
    
    //Empty
    if (s2.empty()){cout << "Stack is empty." << endl;}
    if (!s2.empty()){cout << "Stack is not empty." << endl;}
    
    //Size
    cout << "Size of stack = " << s2.size() << endl << endl;


    //Exchange
    stack<int> s4;
    cout<<"Stack 1 ,we have ";disp(s3);cout<<endl;
    cout<<"Stack 2 ,we have '1 and 2' "<<endl<<endl;
    s4.push(1);
    s4.push(2);
    s2.swap(s4);
    cout << "Contents of stack s1 after swap operation" << endl;
    disp(s2);
    cout << endl;
    cout << "Contents of stack s2 after swap operation" << endl;
    disp(s4);
    return 0;
}