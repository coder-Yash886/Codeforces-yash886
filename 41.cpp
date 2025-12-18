#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        int idx = -1;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(v[0]!=v[1]  && v[0]!=v[2]){
            idx = 1;
        }
        else if(v[1]!=v[0] && v[1]!=v[2]){
            idx = 2;

        }
        else{
        for(int i=2;i<v.size();i++){
            if(v[i]!=v[i-1]){
             
             idx = i+1;
             break;
            }
        }
    }   
        cout<<idx<<endl;
    }

}
