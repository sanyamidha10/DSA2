#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;

    int arr[100];
    cout<<"input elements of array"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    swapAlternate(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }



}