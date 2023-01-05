
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int row=1;
    while(row<=n){
      int col = n-row+1;;
      int start = 1;
      while(col){
        cout<<start;
        start++;
        col--;
      }
      
      int k=row*2-2;
      while(k){
        cout<<"*";
        k--;
      }
      
      int j=n-row+1;
      int print = n-row+1;
      while(j){
        cout<<print;
        print--;
        j--;
      }
      
      row++;
      cout<<endl;
    }
}