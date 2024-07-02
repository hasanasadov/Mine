#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N;
    cout <<"enter the length of array : ";
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
    int max;
    int temp;
    max=arr[0];
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<< "array in Descending order : ";
    for (int i=0;i<N;i++){
        cout <<arr[i]<< " ";
    }
    cout<< "\narray in Ascending order : ";
    for (int i=0;i<N;i++){
        cout <<arr[N-i-1]<< " ";
    }
}