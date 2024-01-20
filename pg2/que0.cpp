#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> myqueue;
    queue<int> myqueue2;
    int choice;
    for(int i = 1; i<=10;i++){
        myqueue.push(i);
    }
    for(int i = 11; i<=20;i++){
        myqueue2.push(i);
    }
    cout << "1. Insert Element into the queue\n2. Delete Element from the queue\n3. Size of the queue\n4. Front Element of the queue\n5. Back Element of the queue\n6. Exchanges the contents of the queue with contents of another queue\n7. Exit" << endl;

    while(true){
        cout << "Enter number for sections: " << endl;
        cin >> choice;
        if(choice == 1){
            queue<int> temp;
            int i;
            cout << "Enter the element to insert: " << endl;
            cin >> i;
            myqueue.push(i);
            temp = myqueue;
            cout << "After inserting:  " << endl;
            while (!temp.empty()) {
                cout << temp.front() << " ";
                temp.pop();
            }
            cout << endl;
        }
        if(choice == 2){
            queue<int> temp;
            cout << endl << "Deleting element from queue" << endl;
            myqueue.pop();
            temp = myqueue;
            cout << "After deleting:  " << endl;
            while (!temp.empty()) {
                cout << temp.front() << " ";
                temp.pop();
            }
            cout << endl;
        }
        if(choice == 3){
            cout << "Size of queue " << myqueue.size() << endl;
            cout << endl;
        }
        if(choice == 4){
            cout << "Front element of queue " << myqueue.front() << endl;
            cout << endl;
        }
        if(choice == 5){
            cout << "Back element of queue " << myqueue.back() << endl;
            cout << endl;
        }
        if(choice == 6){
            queue<int> temp1;
            queue<int> temp2;
            myqueue.swap(myqueue2);
            temp1 = myqueue;
            temp2 = myqueue2;
            cout << "After swapping myqueue:  " << endl;
            while (!temp1.empty()){
                cout << temp1.front() << " ";
                temp1.pop();
                }
            cout << endl << "After swapping myqueue2:  " << endl;
            while (!temp2.empty()) {
                cout << temp2.front() << " ";
                temp2.pop();
            }
            cout << endl;
        }
        if(choice == 7){
            break;
        }
        }
}