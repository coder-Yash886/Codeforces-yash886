#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool check = false;
        for(int i=0;i+1<n;i++){
            if((v[i+1]-v[i])%2==0){
                cout<<v[i]<<" "<<v[i+1]<<endl;
                check = true;
                break;
            }
               
            
        }
        if(!check){
            cout<<-1<<endl;
        }
    }
}


