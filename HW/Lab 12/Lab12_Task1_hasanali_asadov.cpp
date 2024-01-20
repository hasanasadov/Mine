#include <fstream>
#include <iostream>
#include <queue>
using namespace std;
void disp(queue <int> &myqueue){
    while(!myqueue.empty()){
        cout<<myqueue.front()<<" ";
        myqueue.pop();
    }
}
void ins(queue <int> &myqueue){
    int q;
    cout<<"Insert number : ";
    cin>>q;
    myqueue.push(q);
}
void del(queue <int> &myqueue){
    myqueue.pop();
}

int main(){
    queue< int> myqueue;
    myqueue.push(7);
    myqueue.push(10);
    cout<<"We have '7' in queue 1"<<endl;
    cout<<"Press 1 to Insert "<<endl;
    cout<<"Press 2 to Delete "<<endl;
    cout<<"Press 3 to Size "<<endl;
    cout<<"Press 4 to Top "<<endl;
    cout<<"Press 5 to Exchange "<<endl;
    cout<<"Press 6 to Exit "<<endl;
    int a;cout<<"Select func number : ";cin>>a;
    if(a==1){ins(myqueue);cout<<"After insert We have :";disp(myqueue);cout << endl;}
    if(a==2){del(myqueue);cout<<"After del We have :";disp(myqueue);}
    if(a==3){cout << "Size of queue = " << myqueue.size() << endl << endl;}
    if(a==4){myqueue.front();disp(myqueue);}
    if(a==5){
        queue <int> myqueue2;
        myqueue2.push(1);
        myqueue2.push(2);
        cout<<"Queue 1 ,we have ";disp(myqueue);cout<<endl;
        cout<<"Queue 2 ,we have '1 and 2' "<<endl<<endl;
        myqueue.swap(myqueue2);
        
        cout << "Contents of queue q1 after swap operation" << endl;
        disp(myqueue);
        cout << endl;
        cout << "Contents of queue q2 after swap operation" << endl;
        disp(myqueue2);}
    if(a==6){return 0;}
    return 0;
}