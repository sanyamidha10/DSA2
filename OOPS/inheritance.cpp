#include<iostream>
using namespace std;

class Human{
    protected:
        int age;
        int height;
    // private:
        int weight;

    public:
        void setWeight(int weight){
            this->weight = weight;
        }
};

class Male: public Human{
    public:
        string color;

        int getHeight(){
            return this->height;
        }
};

int main(){
    Male A;
    cout<<A.getHeight();
    
}