// 1 2 3 4
//   2 3 4
//     3 4
//       4


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int spaces = row-1;
        while(spaces){
            cout<<" ";
            spaces--;
        }
        int col = n-row+1;
        int temp = row;
        while(col){
            cout<<temp;
            col--;
            temp++;
        }
        cout<<endl;
        row++;
    }
}