#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start=0;
    int end = size-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int size;
    cout<<"Size of array is "<<endl;
    cin>>size;

    cout<<"Input elements of array:"<<endl;
    int arr[100];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    reverseArray(arr, size);

    cout<<"After reversing the array: "<<endl;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }


}