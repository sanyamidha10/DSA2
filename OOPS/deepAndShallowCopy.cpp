#include<iostream>
using namespace std;

class Hero{
    public:
    char* name;
    int health;
    char level;

    Hero(){
        cout<<"Default constructor callled"<<endl;
        name = new char[100];
    }


    Hero(Hero& temp){
        cout<<"Copy constructor callled"<<endl;
        char* ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
        
    }
    void setname(char arr[]){
        strcpy(this->name, arr);
    }

    void print(){
        cout<<"name is "<<this->name<<endl;
    }

};

int main(){
    Hero h1;
    char n [6]= {'s', 'a', 'n', 'y', 'a'};
    h1.setname(n);
    Hero h2(h1);
    h1.name[0] = 't'; 
    h1.print();
    h2.print();
}