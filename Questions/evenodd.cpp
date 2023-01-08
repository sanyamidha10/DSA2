#include<iostream>
using namespace std;

bool isEven(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cin>>n;

    if(isEven(n)){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }


}