#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s,k,m;
        cin>>s>>k>>m;
        long long result;
        if(m<k){
            result = s-m;
        }else{
            result = min(s,k) -(m%k);
        }
        if(result<0) result = 0;
        cout<<result<<endl;
    
       
    }
}