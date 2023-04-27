#include<iostream>
using namespace std;

class Human{

    public:
        int age;
};

int main(){
    // statically created object
    Human h1;
    // Assigning age value to h1 by dot operator
    h1.age = 7;
    cout<<sizeof(h1)<<endl;

    // dynamically created object
    Human* h2 = new Human;
    // Assigning age value to h2 by arrow
    h2->age = 8;
    cout<<sizeof(h2)<<endl;
}