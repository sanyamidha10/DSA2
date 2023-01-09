#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[100];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key you want to find: "<<endl;
    cin>>key;

    int answer = linearSearch(arr, size, key);

    if(answer==-1){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Index of element is "<<answer<<endl;
    }
}