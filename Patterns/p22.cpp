// 1 1 1 1
//   2 2 2
//     3 3
//       4


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int spaces = row-1;
        while(spaces){
            cout<<" ";
            spaces--;
        }
        int col = n-row+1;
        while(col){
            cout<<row;
            col--;
        }
        cout<<endl;
        row++;
    }

}