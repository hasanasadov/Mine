#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,c=0;
    cout << "enter a number:";
    cin >> a;
    for (int i = 2; i < a; i++){
        if (a%i!=0){
            continue;
        }
        else{
            c++;
            break;
        }
    }
    switch (c){
    case 0:
        cout << "The Number is Prime Number" <<endl;
        break;
    default:
        cout << "The Number is NOT Prime Number" <<endl;
        break; 
    }
}