#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int max = v[0];
        int ans = 0;
        for(int i=0;i<n;i++){
            if(v[i]<max){
                ans++;           
        } else{
            max = v[i];
        }
        
    }
    cout<<ans<<endl;
}
}
