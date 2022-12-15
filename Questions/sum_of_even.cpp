#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number upto which you want to find sum: "<<endl;
    cin>>n;

    int i=1;
    int sum = 0;
    while(i<=n){
        sum += i;
        i=i+1;
    }
    cout<<sum<<endl;
}