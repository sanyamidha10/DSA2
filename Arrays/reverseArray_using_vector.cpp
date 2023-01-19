#include<iostream>
using namespace std;
#include<vector>

vector<int> reverse(vector<int> v){
    int s = 0;
    int e = v.size()-1;
    while(s<=e){
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}


int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    v.push_back(20);
    v.push_back(25);

    vector<int> ans = reverse(v);

    for(int i=0; i<v.size(); i++){
        cout<<ans[i]<<" ";
    }

}
