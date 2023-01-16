#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1], arr[j]);
            }
        }
    }
}

int main(){
    int arr[10] = {34, 78, 56, 32, 90, 76, 55, 88, 12, 30};
    int size = 10;
    bubbleSort(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}