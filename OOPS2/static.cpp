#include<iostream>
using namespace std;

class Human{
    public:
        static int time;

        static int func(){
            return time;
        }
};

int Human::time = 10; 

int main(){
    Human h1;
    cout<<h1.time<<endl;
    cout<<Human::func();
}