#include<iostream>
using namespace std;
#include<vector>

vector<int> Union_of_arrays(int arr1[], int m, int arr2[], int n){
    int i=0;
    int j=0;
    vector<int> v;
    while(i<m && j<n){
        while((arr1[i] == arr1[i+1]) && (i<m-1)){
            i++;
        }
        while((arr2[j] == arr2[j+1])  && (j<n-1)){
            j++;
        }

        if(arr1[i]<arr2[j]){
            v.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j]){
            v.push_back(arr2[j]);
            j++;
        }
        else{
            v.push_back(arr1[i]);
            i++;
            j++;
        }

        
    }
    while(i<m){
            if((arr1[i] == arr1[i+1]) && (i<m-1)){
                i++;
            }
            else{
                v.push_back(arr1[i]);
                i++;
            }
        }

        while(j<n){
            if((arr2[j] == arr1[j+1])  && (j<n-1)){
                j++;
            }
            else{
                v.push_back(arr2[j]);
                j++;
            }
        }
    return v;
}


vector<int> intersection(int arr1[], int m, int arr2[], int n){
    int i=0;
    int j=0;
    vector<int> v;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if (arr2[j]<arr1[i]){
            j++;
        }
        else{
            v.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return v;
}


int main(){
    int arr1[8] = {2, 2, 5, 7, 8, 9, 10, 10};
    int arr2[4] = {7, 8, 10, 11};
    //  int arr1[5] = {2, 3, 4, 7, 8};
    // int arr2[7] = {1, 2, 4, 6, 7, 8, 10};

    
    vector<int> ans1 = Union_of_arrays(arr1, 8, arr2, 4);
    cout<<"Union is ->"<<endl;
    for(int it: ans1){
        cout<<it<<" ";
    }

    cout<<endl;
    cout<<"Intersection is ->"<<endl;
    vector<int> ans2 = intersection(arr1, 8, arr2, 4);
    for(int it: ans2){
        cout<<it<<" ";
    }
    
}