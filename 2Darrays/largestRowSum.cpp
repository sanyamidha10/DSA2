#include<iostream>
using namespace std;

int RowSum(int arr[][4], int row, int col){
    int maxi = INT32_MIN;
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            
                sum+=arr[i][j];

        }
        maxi = max(maxi,sum);
    }
    return maxi;
}

int main(){
    

    int arr[3][4];
    cout<<"Enter elements of 2D array"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    int ans = RowSum(arr, 3, 4);
    cout<<ans<<endl;


}