#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of first number: "<<endl;
    cin>>a;

    int b;
    cout<<"Enter the value of second number: "<<endl;
    cin>>b;

    char operation;
    cout<<"Enter the operation"<<endl;
    cin>>operation;

    switch(operation){
        case '+': 
        cout<<a+b<<endl;
        break;

        case '-': 
        cout<<a-b<<endl;
        break;

        case '*': 
        cout<<a*b<<endl;
        break;

        case '/': 
        cout<<a/b<<endl;
        break;

        default:
        cout<<"Invalid operation"<<endl;
    }

}