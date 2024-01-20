#include <iostream>
#include <list>
using namespace std;

class Solution{
    private:
        struct Node{
            int data;
            Node *next;
        };
        Node *head=NULL;

    public:
        void insert(int new_data){
            Node *new_node;
            new_node=new Node;
            new_node->data=new_data;
            new_node->next=head;
            head=new_node;
        }
        void deleting(int temp){
            Node *temp_node=head;
            Node *prev_node=NULL;
            while(temp_node!=NULL){
                if(temp_node->data==temp){
                    if(prev_node==NULL){
                        head=temp_node->next;
                    }
                    else{
                        prev_node->next=temp_node->next;
                    }
                    delete temp_node;
                    break;
                }
                prev_node=temp_node;
                temp_node=temp_node->next;
            }
            
        }
        void display(){
            Node *ptr;
            ptr=head;
            while(ptr!=NULL){
                cout<<ptr->data<<" ";
                ptr=ptr->next;
            }
        }
        void reverser(){
            Node *ptr;
            ptr=head;
            while(ptr!=NULL){
                ptr->next=head;
                head=ptr;
                ptr=ptr->next;
            }
        }
        
};


int main(){
    Solution obj;
    obj.insert(5);
    obj.insert(6);
    obj.insert(1);
    obj.insert(2);
    obj.display();
    cout<<endl;
    obj.deleting(6);
    obj.display();
    cout<<endl;
    obj.reverser();
    obj.display();
    return 0;
}