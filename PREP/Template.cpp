#include <iostream>
using namespace std;
template<class T, int size>
class A{
public:
    T arr[size];
    void input(){cout<< "\n\nEnter Array elements(5): ";for(int i=0;i<size;i++){cin>>arr[i];}}
    void display(){cout << "Sorted Array elements: ";for(int a=0;a<size;a++){cout << arr[a] << "\t";}}
    void sortt(){
        int i,j;
        double temp;
        cout << "Unsorted Array elements: ";
        for(i = 0; i < size; i++){cout << arr[i] << "\t";}
        cout << endl;
        for(i = 0; i < size; i++){
            for(j = i + 1; j < size; j++){
                if(arr[i] > arr[j]){temp = arr[i];arr[i] = arr[j];arr[j] = temp;}
            }
        }
    }
    void sortforchar(){
        int i,j;
        char temp;
        cout << "Unsorted Array elements: ";
        for(i = 0; i < size; i++){cout << arr[i] << "\t";}
        cout << endl;
        for(i = 0; i < size; i++){
            for(j = i + 1; j < size; j++){
                if(arr[i] > arr[j]){temp = arr[i];arr[i] = arr[j];arr[j] = temp;}
            }
        }
    }

};
int main(){
    cout<<"For int press 1\nFor double press 2\nFor char press 3 : \n";int q;cin>>q;
    if(q==1){
        A<int,5> obj1;
        obj1.input();
        obj1.sortt();
        obj1.display();}
    if(q==2){
        A<double,5> obj2;
        obj2.input();
        obj2.sortt();
        obj2.display();}
    if(q==3){
        A<char,5> obj3;
        obj3.input();
        obj3.sortforchar();
        obj3.display();}
    return 0;
}