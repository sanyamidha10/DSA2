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

void insertAtHead(node* &head,node* &tail, int data){
    if(head == NULL){
        node* temp = new node(data);
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(node* &head, node* &tail, int data){
    if(tail==NULL){
        node* temp = new node(data);
        tail = temp;
        head= temp;
    }
    else{
        node* temp = new node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertionOperation(node* &head, node* &tail, int data, int pos){
    if(pos==1){
        insertAtHead(head, tail, data);
        return;
    }

    int count = 1;
    node* temp = head;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(head, tail, data);
        return;
    }

    node* nodeToInsert = new node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

}

void deletionOperation(node* &head, int pos){
    if(pos == 1){
        node* temp = head;
        head = temp->next;
        temp->next->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else{
        node* prev = NULL;
        node* curr = head;

        int count = 1;
        while(count<pos){
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        // curr->next->prev = curr->prev;
        curr->next = NULL;
        curr->prev = NULL;
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
    node* head = NULL;
    node* tail = NULL;

    insertionOperation(head, tail, 10, 1);
    print(head);
    insertionOperation(head, tail, 20, 2);
    print(head);
    insertionOperation(head, tail, 30, 3);
    print(head);
    insertionOperation(head, tail, 40, 4);
    print(head);
    insertionOperation(head, tail, 50, 1);
    print(head);

    deletionOperation(head, 2);
    print(head);
    deletionOperation(head, 3);
    print(head);

}