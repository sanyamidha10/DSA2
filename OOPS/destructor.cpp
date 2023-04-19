#include<iostream>
using namespace std;

class Hero{
    public:
    int health;  

    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    Hero a;
    Hero* b = new Hero();
    // delete b;
}