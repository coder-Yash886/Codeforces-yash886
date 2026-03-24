#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;

    string s1 = "HQ9";

    bool check  = false;

    for(int i=0;i<s1.size();i++){
        for(int j=0;j<str.size();j++){
            if(s1[i]==str[j]){
                check = true;
                break;
            }
        }
    }
    if(check){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}