#include <iostream>
#include <exception>
using namespace std;

//Task1

int main(){
    int x;cout<<"enter age: \n";cin>>x;
    try{
        if(x < 100 && x>0){throw x;}
        else{throw "";}
    }
    catch (int x){cout <<"Age is "<<x<<endl;}
    catch(...){cout<<"Age is "<<x<<endl;cout<<"ERROR : You are not allowed to enter char or >100 or <0 numbers!!!\n";}
    return 0;
}
