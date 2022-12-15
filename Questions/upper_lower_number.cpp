#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the input: "<<endl;
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"Its lowercase alphapbet"<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Its uppercase alphabet"<<endl;
    }
    else{
        cout<<"Its a digit"<<endl;
    }
}