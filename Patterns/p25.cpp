//       1
//     2 3
//   4 5 6
// 7 8 9 10 


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int start = 1;
    int row = 1;
    while(row<=n){
        int spaces = n-row;
        while(spaces){
            cout<<" ";
            spaces--;
        }

        int col = 1;
        while(col<=row){
            cout<<start;
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }
}