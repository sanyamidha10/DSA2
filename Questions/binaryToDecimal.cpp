#include<iostream>
using namespace std;
#include<math.h>

int main(){
    int n;
    cout<<"Enter any binary number to convert into decimal : "<<endl;
    cin>>n;

    int ans = 0;
    int i=0;
    while(n!=0){
        int digit = n%10;

        if(digit == 1){
            ans += pow(2,i);
        }

        n /=10;
        i++;
    }

    cout<< ans<<endl;
}