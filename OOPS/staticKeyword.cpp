#include<iostream>
using namespace std;

class Hero{
    public:
    static int TimeToComplete;
};

int Hero::TimeToComplete = 5;

int main(){
    cout<<Hero::TimeToComplete;
}