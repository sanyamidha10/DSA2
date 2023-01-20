#include<iostream>
using namespace std;

void reverse(char arr[], int length){
    int s=0;
    int e=length-1;
    while(s<=e){
        swap(arr[s++], arr[e--]);
    }
}

int main(){
    char name[20];
    cout<<"Enter your name or any string"<<endl;
    cin>>name;
    
    int count =0;

    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    reverse(name, count);

    cout<<name<<endl;


}