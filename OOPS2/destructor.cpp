#include<iostream>
using namespace std;

class Human{
    public:
        int age;

    Human(){
        cout<<"Constructor called"<<endl;
    }
    ~Human(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    Human h1;

    Human* h2 = new Human;
    delete h2; // this is the way for calling destructor of dynamically created object 

    
}