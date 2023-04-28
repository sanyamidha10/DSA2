#include<iostream>
using namespace std;

class Animal{
    public:
    void voice(){
        cout<<"Speak";
    }
};

class Dog{
    public:
    void voice(){
        cout<<"bark";
    }
};

int main(){
    Dog d;
    d.voice();
}