#include<iostream>
using namespace std;

class Animal{
    public:
        int age;
};

class Dog: public Animal{
    public:
        bool happy;
};


int main(){
    Dog d;
    d.age = 7;
    d.happy = true;

}