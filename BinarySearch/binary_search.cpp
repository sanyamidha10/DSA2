#include<iostream>
using namespace std;

int  binarySearch(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int mid = (s+(e-s)/2);

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            s = mid+1;

        }
        else{
            e = mid-1;
        }

        mid = (s+(e-s)/2);
    }
    return -1;
}

int main(){
    int arr[8] = {4, 7, 90, 98, 101, 456, 780, 890};
    int key = 456;

    cout<<"Index of "<<key<<" is "<<binarySearch(arr, 8, key);
}