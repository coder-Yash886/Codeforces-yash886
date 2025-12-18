#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long hc,dc;
        cin>>hc>>dc;
        long long hm,dm;
        cin>>hm>>dm;
        int k;
        long long w,a;
        cin>>k>>w>>a;
        bool ok = false;
        for(int i=0;i<=k;i++){
            long long attack = dc+i*w;
            long long health = hc +(long long)(k-i)*a;

            long long hits = (hm+attack-1)/attack;

            long long damage = (hits-1)*dm;

            if(health>damage){
                ok = true;
                break;
            }
        
        }
        cout<<(ok ? "YES\n" : "NO\n");
  
    }
    
}