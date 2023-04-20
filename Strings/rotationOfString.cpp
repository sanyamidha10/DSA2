#include<iostream>
using namespace std;

bool checkRotation(string str1, string str2){
    if(str1.length() != str2.length()){
        return false;
    }
    string temp = str1+str1;
    if(temp.find(str2) != string::npos){
        return 1;
    }
    else{
        return 0;
    }

    return 0;
}

int main(){
    string string1;
    string string2;

    cin>>string1;
    cin>>string2;

    if(checkRotation(string1, string2)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}