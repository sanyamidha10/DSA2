#include<iostream>
using namespace std;

void RowSum(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            
                sum+=arr[i][j];

        }
        cout <<sum<<" ";
    }
}

int main(){
    

    int arr[3][4];
    cout<<"Enter elements of 2D array"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    RowSum(arr, 3, 4);

    

}