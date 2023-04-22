#include<iostream>
using namespace std;

class A{
    public:
    int a;
    
    void operator+ (A &obj){
        int val1 = this->a;
        int val2 = obj.a;
        cout<<val2-val1<<endl;
    }

    void operator() (){
        cout<<"I am bracket "<<this->a;
    }

};

int main(){
    A obj1;
    A obj2;
    
    obj1.a=5;
    obj2.a=9;

    obj1 + obj2;

    obj2();

}