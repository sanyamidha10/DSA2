//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        int spaces = n-row;
        while(spaces){
            cout<<" ";
            spaces--;
        }
        int col = 1;
        while(col<=row){
            cout<<col;
            col++;
        }

        int k = 2;
        int start = row-1;
        while(k<=row){
            cout<<start;
            start--;
            k++;
        }
        cout<<endl;
        row++;
    }
}