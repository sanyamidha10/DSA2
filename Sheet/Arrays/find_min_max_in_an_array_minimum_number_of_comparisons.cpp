#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the umber of elements";
    cin>>n;

    int arr[10000];
    cout<<"Enter the elements of array "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int i;

    int min;
    int max;
    if(n&1){
        min = arr[0];
        max = arr[0];
        i=1;
    }
    else{
        if(arr[0]>arr[1]){
            max = arr[0];
            min = arr[1];
        }
        else{
            min = arr[0];
            max = arr[1];
        }
        i=2;
    }

    while(i<n-1){
        if(arr[i]>arr[i+1]){
            if(arr[i]>max){
                max = arr[i];
            }
            if(arr[i+1]<min){
                min = arr[i+1];
            }
        }
        else{
            if(arr[i+1]>max){
                max = arr[i+1];
            }
            if(arr[i]<min){
                min = arr[i];
            }
        }
        i+=2;
    }

    cout<<"Maximum number is "<<max<<endl;
    cout<<"Minimum number is "<<min<<endl;
}