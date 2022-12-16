// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        int temp = row;
        while(col<=row){
            cout<<temp<<" ";
            temp--;
            col++;
        }
        cout<<endl;
        row++;
    }
}