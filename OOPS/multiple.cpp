#include<iostream>
using namespace std;

class Animal{
    public:
    void bark(){
        cout<<"Barking";
    }
};

class Human{
    public:
    void speak(){
        cout<<"Speaking";
    }
};

class Hybrid: public Animal, public Human{
    
};

int main(){
    Hybrid H;
    H.bark();
    H.speak();
}