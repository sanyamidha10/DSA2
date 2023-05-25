#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;

    node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;

}

void insertAtTail(node* &tail, int d){
    node* temp = new node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;

}

void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int length(node* head){
    int count =0;
    node* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

int main(){
    node* node1 = new node(1);
    
    node* head = node1;
    insertAtHead(head, 2);
    cout<<"length = "<<length(head)<<endl;
    print(head);

    insertAtHead(head, 3);
    cout<<"length = "<<length(head)<<endl;
    print(head);

    node* tail = node1;
    insertAtTail(tail, 0);
    cout<<"length = "<<length(head)<<endl;
    print(head);

}