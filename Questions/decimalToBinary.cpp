#include<iostream>
using namespace std;
#include<math.h>

int main(){
    int n;
    cout<<"Enter the decimal number to convert into binary number"<<endl;
    cin>>n;

    int answer = 0;
    int i=0;

    while(n!=0){
        int bit = n&1;

        answer = (bit * powf(10, i) + answer);
        n=n>>1;
        i++;
    }

    cout<<answer<<endl;
}