#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;

    // Hero(){
    //     cout<<"Default constructor called";
    // }

    // Parameterised constructor
    Hero(char level){
        this->level = level;
        cout<<"Parameterised Default constructor called"<<endl;
    }

    // Copy Constructor
    Hero(Hero& temp){
        this->health=temp.health;
        this->level = temp.level;
        cout<<"Copy constructor called";
    }
    
    void print(){
        cout<<level<<endl;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
};

int main(){
    Hero h1('H');
    h1.print();
    // h1.health=70;
    // h1.level='A';
    // cout<<"Health is"<<h1.health<<endl;
    // cout<<"Level is"<<h1.level<<endl;
    // h1.print();

    Hero h2(h1);
    h2.print();

    Hero* b = new Hero('I');
    b->print();

    // h1.setHealth(24);
    // h1.setLevel('B');


    // b->setHealth(20);
    // b->setLevel('D');
    // cout<<"health of dynamic allocated object is "<<(*b).getHealth()<<endl;
    // cout<<"Level of dynamic allocated object is "<<(*b).getLevel()<<endl;

    // cout<<h1.getHealth()<<endl;
    // cout<<h1.getLevel()<<endl;
    // cout<<"Size of h1 "<<sizeof(h1)<<endl;


}
