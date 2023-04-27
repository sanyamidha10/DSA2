#include<iostream>
using namespace std;

class Human{
    public:
        int age;
        char* name;

    Human(int age){
        cout<<"Default constructor called "<<endl;
        name = new char[100];
        this->age = age;
    }

    Human(Human &obj){
        cout<<"Default Copy constructor called"<<endl;
        this->age = obj.age;
        char* arr = new char[strlen(obj.name)+1];
        strcpy(arr, obj.name);
        this->name = arr;

    }

    void setName(char arr[]){
        this->name = arr;
    }


        
};

int main(){
    Human h1(23);
    char n [6]= {'s', 'a', 'n', 'y', 'a'};
    h1.setName(n);
    
    Human h2(h1);
    h1.name[0] = 't';
    cout<<h1.name<<endl;
    cout<<h2.name<<endl;
    
}
