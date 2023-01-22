#include<iostream>
using namespace std;

int isPresent(int arr[][4], int row, int col, int target){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    

    int arr[3][4];
    cout<<"Enter elements of 2D array"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Enter the element you want to find"<<endl;
    int target;
    cin>>target;

    if(isPresent(arr, 3, 4, target)){
        cout<<"Yes found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }


}