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
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail=temp;
}

void insertAtPosition(Node* &head, int position, int data){
    Node* temp = head;
    int count = 1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}



int main(){
    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 0);
    insertAtTail(tail, 2);
    insertAtPosition(head, 3, 100);
    print(head);

}