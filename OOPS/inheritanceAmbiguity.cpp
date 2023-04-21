#include<iostream>
using namespace std;

class A{
    public:
    void abc(){
        cout<<"I am class A";
    }
};

class B{
    public:
    void abc(){
        cout<<"I am class B";
    }
};

class C: public A, public B{
    
};

int main(){
    C obj1;
    obj1.A::abc();
    obj1.B::abc();

}