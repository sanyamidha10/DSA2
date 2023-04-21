#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    void speak(){
        cout<<"Speak";
    }
};

class Dog: public Animal{

};

int main(){
    Dog D;
    D.speak();
}