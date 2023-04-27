#include<iostream>
using namespace std;

class Animal{
    public:
        int age;
        string color;

        Animal(int age, string color){
            this->age = age;
            this->color = color;
        }

        int getAge(){
            return this->age;
        }
        string getColor(){
            return this->color;
        }
        
};

int main(){
    Animal Dog(2, "black");
    cout<<Dog.getAge()<<endl;
    cout<<Dog.getColor()<<endl;
}