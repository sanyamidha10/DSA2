#include<iostream>
using namespace std;

class Hero{
    public:
    static int TimeToComplete;

    static int random(){
        return TimeToComplete;
    }
};

int Hero::TimeToComplete = 5;

int main(){
    cout<<Hero::random();
}