#include<iostream>
using namespace std;

int firstOccur(int arr[], int n, int ele){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans =-1;
    while(s<=e){
        if(ele==arr[mid]){
            ans=mid;
            e=mid-1;
        }
        else if(ele>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
   
}

int lastOccur(int arr[], int n, int ele){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans =-1;
    while(s<=e){
        if(ele==arr[mid]){
            ans=mid;
            s=mid+1;
        }
        else if(ele>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
   
}


int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;

    int arr[100];
    cout<<"Enter elements of array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the element of which you want to find total occurrences: "<<endl;
    int element;
    cin>>element;

    int ans1 = firstOccur(arr, n, element);
    // cout<<"First Occurrence of "<<element<<" is at index "<<ans1<<endl;

    int ans2 = lastOccur(arr, n, element);
    // cout<<"Last Occurrence of "<<element<<" is at index "<<ans2<<endl;

    int final_ans = ans2-ans1+1;
    cout<<"Total occurrence of "<<element<<" is "<<final_ans<<" times"<<endl;

}