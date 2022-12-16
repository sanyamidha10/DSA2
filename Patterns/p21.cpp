// * * * *
//   * * *
//     * *
//       *

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row =1;
    while(row<=n){
        int spaces = row-1;
        while(spaces){
            cout<<" ";
            spaces--;
        }
        int col = n-row+1;
        while(col){
            cout<<"*";
            col--;
        }
        cout<<endl;
        row++;
    }
}