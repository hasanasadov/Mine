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
    ofstream outfile;
    outfile.open("output.txt");
    while(!myqueue.empty()){
        char c = toupper(myqueue.front());
        outfile.put(c);
        myqueue.pop();
    }
    outfile.close();
    cout << "\n\nDone\n\n";
}
