#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j;
        for(j=i-1; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }

        arr[j+1] = temp;
    }
}


int main(){
    int arr[10] = {34, 78, 56, 32, 90, 76, 55, 88, 12, 30};
    int size = 10;
    insertionSort(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}