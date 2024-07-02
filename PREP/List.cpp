#include <iostream>
#include <list>
#include <stdlib.h>
using namespace std;
int main(){
    list<int> l;

    cout<<"My list is \t";
    for (int i = 0; i < 10; ++i){l.push_back(rand()%10);}

    for(list<int>::iterator it = l.begin(); it!= l.end(); ++it){cout << *it << " ";}
    cout<<"\nthe number of elements : \t"<<l.size()<<endl;

    list<int>::iterator it2 = l.begin();
    cout<<"\nFirst element \t"<< *it2;

    l.pop_front();
    cout<<"\nerased 1st element list is \t";
    for(list<int>::iterator it = l.begin(); it!= l.end(); ++it){cout << *it << " ";}

    cout<<"\nthe number of elements : \t"<<l.size()<<endl;

    l.sort();
    cout<<"\nMy sorted list is \t";
    for(list<int>::iterator it = l.begin(); it!= l.end(); ++it){cout << *it << " ";}
}   