#include<iostream>
using namespace std;

int prime(int num){
    for(int i=2; i<num; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter the number to know whether its prime or not"<<endl;
    cin>>n;

    int ans = prime(n);
    if(ans==0){
        cout<<"Not a prime number";
    }
    else{
        cout<<"Prime number.";
    }

}