#include<iostream>
using namespace std;

int get_min(int arr[], int size){
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    return min;
}

int get_max(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;
}

int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Minimum element is "<<get_min(arr, size)<<endl;;
    cout<<"Maximum element is "<<get_max(arr, size)<<endl;
}