#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int lo = 0;
        int hi = n-1;
        int ans = n;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(v[mid]>a){
                ans = mid;
                hi = mid-1;
            }
            else lo = mid+1;

        }
        int left = ans;
        int right = n-ans;
        if(right>left){
            cout<<v[n-1]+1<<endl; 
        }
        else{
            cout<< max(0LL,(long long)v[0]-1)<<endl;
        }
    }
    return 0;
}