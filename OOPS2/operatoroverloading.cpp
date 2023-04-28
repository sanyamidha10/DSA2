#include<iostream>
using namespace std;

class A{
    public:
    int a;
   

    int operator+ (A& obj){
        int val1 = this->a;
        int val2 = obj.a;
        return val2 - val1;
    }

    void operator() (){
        cout<<"This is operator overloading "<<this->a;
    }
};

int main(){
    A object1;
    A object2;

    object1.a=7;
    object2.a=8;

    cout<<object1 + object2<<endl;

    object2();

}