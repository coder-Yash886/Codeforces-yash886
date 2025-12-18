#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,z;
        cin>>n>>z;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int maxi = -1;
        for(int i=0;i<n;i++){
            maxi = max(maxi,v[i]);
        }
        int no = maxi-z;
        for(int i=0;i<n;i++){
            if(no>=v[i]){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}