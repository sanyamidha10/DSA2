#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    // Creating a new node
    Node* temp = new Node(data);

    temp->next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    insertAtHead(head, 12);
    insertAtHead(head, 15);

    print(head);


}