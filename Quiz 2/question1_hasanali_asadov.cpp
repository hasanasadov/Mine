#include <iostream>
#include <cstdlib>
#include <list>
using namespace std;

int main() {
    srand(time(NULL));
    list<int> myList;

    for (int i = 0; i < 20; i++) {
        int randNum = rand() % 60 +10 ;
        auto it = myList.begin();
        while (it != myList.end() && *it < randNum){it++;}
        myList.insert(it, randNum);
    }

    cout << "Original List: ";
    for (auto it = myList.begin(); it != myList.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    myList.reverse();
    cout << "Reverse List: ";
    for (auto it = myList.begin(); it != myList.end(); it++){cout << *it << " ";}
    cout << endl;

    cout << "Size of List: ";
    cout<< myList.size();
    return 0;
}
