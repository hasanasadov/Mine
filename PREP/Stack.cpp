#include <iostream>
#include <stack>
using namespace std;
void disp(stack <int> &s){while(!s.empty()){cout<<s.top()<<" ";s.pop();}}
void ins(stack <int> &s){int q;cout<<"Insert number : ";cin>>q;s.push(q);}
void del(stack <int> &s){s.pop();}
int main(){
    stack< int> s;
    s.push(7);
    cout<<"We have '7' in stack 1"<<endl;
    cout<<"Press 1 to Insert "<<endl;
    cout<<"Press 2 to Delete "<<endl;
    cout<<"Press 3 to Size "<<endl;
    cout<<"Press 4 to Top "<<endl;
    cout<<"Press 5 to Exchange "<<endl;
    cout<<"Press 6 to Exit "<<endl;
    int a;cout<<"Select func number : ";cin>>a;
    if(a==1){ins(s);cout<<"After insert We have :";disp(s);cout << endl;}
    if(a==2){del(s);cout<<"After del We have :";disp(s);}
    if(a==3){cout << "Size of stack = " << s.size() << endl << endl;}
    if(a==4){s.top();disp(s);}
    if(a==5){
        stack<int> s2;
        s2.push(1);
        s2.push(2);
        cout<<"Stack 1 ,we have ";disp(s);cout<<endl;
        cout<<"Stack 2 ,we have '1 and 2' "<<endl<<endl;
        s.swap(s2);
        
        cout << "Contents of stack s1 after swap operation" << endl;
        disp(s);
        cout << endl;
        cout << "Contents of stack s2 after swap operation" << endl;
        disp(s2);}
    if(a==6){return 0;}
    return 0;
}