#include <fstream>
#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue <char> myqueue;
    ifstream infile;
    infile.open("input.txt");
    char ch;
    while(infile.get(ch)){
        myqueue.push(ch);
    }
    infile.close();
    ofstream of{"itselfcreated_output.txt"};
    while(!myqueue.empty()){
        char c = toupper(myqueue.front());
        of.put(c);
        myqueue.pop();
    }
    of.close();
    cout << "\n\nDone\n\n";
}
