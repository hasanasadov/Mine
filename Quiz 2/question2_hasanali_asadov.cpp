#include <iostream>
#include <exception>
using namespace std;
class Excep{
public:
    Excep(){};
    void error(){cout << "The value range must be between 50 and 100 !!! \n";}  
};

int Maximum(int a, int b, int c, int d, int e){
    int arr[]={a,b,c,d,e};
    int max = arr[0];
    for (int i=0; i<5; i++){
        if (arr[i] < 50 || arr[i] > 100){Excep Ex;throw Ex;}
        if (max < arr[i]){max = arr[i];}
    }
    return max;
}

int main(){
    while (true){
        try{
            int a, b, c, d, e;
            cout << "Enter  value a : ";cin >> a;
            while(a<50 || a>100){cout << "Out of range TRY between 50 and 100 !! " ;cin>>a;}
            cout << "Enter  value b : ";cin >> b;
            while(b<50 || b>100){cout << "Out of range TRY between 50 and 100 !! " ;cin>>b;}
            cout << "Enter  value c : ";cin >> c;
            while(c<50 || c>100){cout << "Out of range TRY between 50 and 100 !! " ;cin>>c;}
            cout << "Enter  value d : ";cin >> d;
            while(d<50 || d>100){cout << "Out of range TRY between 50 and 100 !! " ;cin>>d;}
            cout << "Enter  value e : ";cin >> e;
            while(e<50 || e>100){cout << "Out of range TRY between 50 and 100 !! " ;cin>>e;}
            cout << "Maximum is " << Maximum(a,b,c,d,e) << endl;
        }
        catch (Excep Ex){
            Ex.error();
            cout << "Enter Again" << endl;
        }
    }
}