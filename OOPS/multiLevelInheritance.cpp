#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    void speak(){
        cout<<"Speaking";
    }
};

class Dog: public Animal{

};

class ShitZu: public Dog{
    
};

int main(){
    ShitZu S;
    S.speak();

}