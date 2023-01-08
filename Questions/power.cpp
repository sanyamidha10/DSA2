#include<iostream>
using namespace std;

int power_of_base(int base, int power){
    int answer = 1;
    for(int i=0; i<power; i++){
        answer = answer*base;
    }

    return answer;
}

int main(){
    int base, power;
    cout<<"Enter value of base"<<endl;
    cin>>base;

    cout<<"Enter value of power"<<endl;
    cin>>power;

    int ans = power_of_base(base, power);
    cout<<ans<<endl;


}