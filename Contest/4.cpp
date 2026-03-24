#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        vector<int>onece;
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
                onece.push_back(i);
            }
        }
        if(onece.size()==n){
            cout<<0<<endl;
            continue;
        }
        int ans = 0;
        int m = onece.size();
        for(int k=0;k<m;k++){
            int i = onece[k];
            int j = onece[(k+1)%m];
            int gap = (j-i-1+n)%n;
            ans = max(ans,gap);
        }
        cout<<ans<<endl;
    }
}
 