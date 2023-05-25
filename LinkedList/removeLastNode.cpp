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
    head=temp;
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
        temp = temp->next;
        count++;
    }

    node* nodeToInsert = new node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}


void deleteLastNode(node* &head){
    node* prev = NULL;
    node* curr = head;
    while(curr->next!=NULL){
        prev = curr;
        curr = curr->next;
    }

    delete curr;
    prev->next = NULL;
}

void print(node* &head){
    node* temp = head;
    while(temp!= NULL){
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
    insertAtHead(head, 3);
    print(head);

    node* tail = node1;
    insertAtTail(tail, 0);
    print(head);

    insertAtPos(head, 3, 30);
    print(head);

    deleteLastNode(head);
    print(head);

}