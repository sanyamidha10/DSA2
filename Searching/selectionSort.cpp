#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main(){
    int arr[10] = {34, 78, 56, 32, 90, 76, 55, 88, 12, 30};
    int size = 10;
    selectionSort(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}