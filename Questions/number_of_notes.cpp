#include<iostream>
using namespace std;

int main(){
    int amount;
    cout<<"Enter amount to know number of notes"<<endl;
    cin>>amount;

    int Rs100, Rs50, Rs10, Rs1;

    switch(1){
        case 1:
        Rs100 = amount/100;
        cout<<"Number of notes of Rs100 are: "<<Rs100<<endl;
        amount %=100;

        case 2:
        Rs50 = amount/50;
        cout<<"Number of notes of Rs50 are: "<<Rs50<<endl;
        amount %=50;

        case 3:
        Rs10 = amount/10;
        cout<<"Number of notes of Rs10 are: "<<Rs10<<endl;
        amount %=10;

        case 4:
        Rs1 = amount/1;
        cout<<"Number of notes of Rs1 are: "<<Rs1<<endl;
        amount %=1;

    }
}