#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        vector<long long> copy = v;

        sort(copy.begin(),copy.end());

        if(copy == v || k > 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}