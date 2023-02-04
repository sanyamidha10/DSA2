#include<iostream>
using namespace std;

int fib(int n){
    int a = 0;
    int b=1;
    int c;

    if(n==1){
        return 0; 
        }
    if(n==2){
        return 1;
    }
    for(int i=2; i<=n; i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}

int main(){
    int n;
    cin>>n;

    int ans = fib(n);
    cout<<ans;
}