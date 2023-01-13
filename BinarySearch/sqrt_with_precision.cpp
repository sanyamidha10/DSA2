#include<iostream>
using namespace std;

long long int sqrt(int n){
    long long int s=0;
    long long int e=n-1;
    long long int mid=s+(e-s)/2;
    long long int ans =-1;
    while(s<=e){
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<mid){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i=0; i<precision; i++){
        factor/=10;

        for(double j = ans; j*j<n; j+=factor){
            ans = j;
        }
    }
    return ans;
}


int main(){
    int n;
    cout<<"Enter the value of number "<<endl;
    cin>>n;

    long long int tempSol = sqrt(n);
    cout<<"Answer is "<<morePrecision(n, 3, tempSol);
}