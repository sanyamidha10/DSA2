#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(node* &tail, int data){
    node* temp = new node(data);
    tail->next = temp;
    tail = temp;
}

void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}



int main(){

    node* node1 = new node(10);

    node* head = node1;
    node* tail = node1;
    insertAtTail(tail, 12);
    print(head);

}