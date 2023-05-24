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

void insertAtHead(node* &head, int data){
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(node* &tail, int data){
    node* temp = new node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPos(node* &head, int pos, int data){
    int count = 1;
    node* temp = head;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }

    node* nodeToInsert = new node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}


void deletionAtPos(node* &head, int pos){
    if(pos==1){
        node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }
    else{
        node* prev = NULL;
        node* curr = head;

        int count = 1;
        while(count < pos){
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

    }
}

void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    node* node1 = new node(1);

    node* head = node1;
    insertAtHead(head, 2);
    print(head);

    node* tail = node1;
    insertAtTail(tail, 3);
    print(head);

    insertAtPos(head, 3, 10);
    print(head);

    deletionAtPos(head, 2);
    print(head);
}