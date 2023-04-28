#include<iostream>
using namespace std;

class Addition{
    public:
        int sum(int a, int b){
            int ans = a+b;
            return ans;
        }

        double sum(double a, double b){
            double ans = a+b;
            return ans;
        }
        
};

int main(){
    Addition a;
    cout<<a.sum(2, 5)<<endl;
    cout<<a.sum(2.5, 6.7)<<endl;
}