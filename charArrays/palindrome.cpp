// This is case sensitive;
#include<iostream>
using namespace std;

int palindrome(char arr[], int count){
    int s=0;
    int e = count-1;
    while(s<=e){
        if(arr[s]==arr[e]){
            s++;
            e--;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(){
    char arr[20];
    cout<<"Enter a string"<<endl;
    cin>>arr;

    int count = 0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }

    int ans = palindrome(arr, count);

    cout<<ans<<endl;
}