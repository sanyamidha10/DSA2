#include<iostream>
using namespace std;

class Animal{
    public:
        int age;
};

class Dog: public Animal{

};

class Cat: public Animal{

};

int main(){
    Dog d;
    Cat c;
}