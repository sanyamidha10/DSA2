#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eating something";
    }
};

class Dog: public Animal{
    public:
    void eat(){
        cout<<"Eating Bones";
    }
};

int main(){
    Animal A;
    Dog D;
    D.eat();
    A.eat();
}