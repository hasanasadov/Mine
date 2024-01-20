#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> mystack;
    stack<int> mystack2;
    int choice;
    for(int i = 1; i<=10;i++){
        mystack.push(i);
    }
    for(int i = 11; i<=20;i++){
        mystack2.push(i);
    }
    cout << "1. Insert Element into the Stack\n2. Delete Element from the Stack\n3. Size of the Stack\n4. Top Element of the stack\n5. Exchanges the contents of the stack with contents of another stack\n6. Exit" << endl;

    while(true){
        cout << "Enter number for sections: " << endl;
        cin >> choice;
        if(choice == 1){
            stack<int> temp;
            int i;
            cout << "Enter the element to insert: " << endl;
            cin >> i;
            mystack.push(i);
            temp = mystack;
            cout << "After inserting:  " << endl;
            while (!temp.empty()) {
                cout << temp.top() << " ";
                temp.pop();
            }
            cout << endl;
        }
        if(choice == 2){
            stack<int> temp;
            cout << endl << "Deleting element from stack" << endl;
            mystack.pop();
            temp = mystack;
            cout << "After deleting:  " << endl;
            while (!temp.empty()) {
                cout << temp.top() << " ";
                temp.pop();
            }
            cout << endl;
        }
        if(choice == 3){
            cout << "Size of stack " << mystack.size() << endl;
            cout << endl;
        }
        if(choice == 4){
            cout << "Top element of stack " << mystack.top() << endl;
            cout << endl;
        }
        if(choice == 5){
            stack<int> temp1;
            stack<int> temp2;
            mystack.swap(mystack2);
            temp1 = mystack;
            temp2 = mystack2;
            cout << "After swapping mystack:  " << endl;
            while (!temp1.empty()){
                cout << temp1.top() << " ";
                temp1.pop();
                }
            cout << endl << "After swapping mystack2:  " << endl;
            while (!temp2.empty()) {
                cout << temp2.top() << " ";
                temp2.pop();
            }
            cout << endl;
        }
        if(choice == 6){
            break;
        }
        }

}

#include <iostream>
#include <fstream>
#include <queue>
#include <cctype>

using namespace std;

int main(){
    // Open the input file and read its contents into a queue
    ifstream input_file("input.txt");
    queue<char> input_queue;
    char c;
    while (input_file.get(c))
    {
        input_queue.push(c);
    }
    input_file.close();

    // Open the output file and write the uppercase characters to it
    ofstream output_file("output.txt");
    while (!input_queue.empty())
    {
        char uppercase_c = toupper(input_queue.front());
        output_file.put(uppercase_c);
        input_queue.pop();
    }
    output_file.close();

    return 0;
}
