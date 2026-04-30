#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    unordered_map<string, int> mp;
    while(n--){
        string str;
        cin>>str;
        if(mp[str] == 0){
            cout<<"OK"<<endl;
            mp[str] = 1;
        }else{
            cout<<str + to_string(mp[str])<<endl;
            mp[str]++;
        }
    }
}