#include<iostream>
using namespace std;

class addition{
    
    public:
    void add(int a, int b){
        cout<<a+b<<endl;
    }

    void add(double a, double b){
        cout<<a+b<<endl;
    }
};

int main(){
    addition A;
    A.add(2, 3);
    A.add(5.2, 6.3);
}