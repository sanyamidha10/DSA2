#include<iostream>
using namespace std;

class A{
    public:
        int age;
        string color;

    void setAge(int age){
        this->age = age;
    }
    void setColor(string color){
        this->color = color;
    }

    int getage(){
        return this->age;
    }

    string getColor(){
        return this->color;
    }

};

int main(){
    A a;
    a.setAge(7);
    a.setColor("purple");

    cout<<a.getage()<<endl;
    cout<<a.getColor()<<endl;

}