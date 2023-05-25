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

void insertAtHead(node* &head, node* &tail, int data){
    if (head == NULL){
        node* temp = new node(data);
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(data);
        temp->next = head;
        head = temp;
    }
}

void insertAtTail(node* &head, node* &tail, int data){
    if (tail == NULL){
        node* temp = new node(data);
        tail = temp;
        head = temp;
    }
    else{
        node* temp = new node(data);
        tail->next = temp;
        tail = temp;
    }
}

void insertOperation(node* &head, node* &tail, int data, int pos){
    if(pos==1){
        insertAtHead(head,tail,data);
        return;
    }
    
    node* temp = head;
    int count = 1;
    while(count<pos-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(head, tail, data);
        return;
    }

    node* nodeToInsert = new node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void deleteOperation(node* &head, node* &tail, int pos){
    if(pos == 1){
        node* temp = head;
        head = head->next;
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
    node* head = NULL;
    node* tail = NULL;

    insertOperation(head, tail, 6, 1);
    print(head);
    insertOperation(head, tail, 5, 2);
    print(head);
    insertOperation(head, tail, 5, 1);
    print(head);
    insertOperation(head, tail, 10, 4);
    print(head);
    deleteOperation(head, tail, 3);
    print(head);


}