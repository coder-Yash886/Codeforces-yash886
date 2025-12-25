#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long sum = 0;
        for(int i=0;i<n-1;i++){
            sum += abs((v[i]-v[i+1]));
        }

        long long maxsum = sum;
        maxsum = min(maxsum,sum-abs(v[0]-v[1]));
        maxsum = min(maxsum,sum-abs(v[n-2]-v[n-1]));
        for(int i=1;i<=n-2;i++){
            long long cur = sum-abs(v[i-1]-v[i])-abs(v[i]-v[i+1])+abs(v[i-1]-v[i+1]);
            maxsum = min(maxsum,cur);
        }
        cout<<maxsum<<endl;

    }
}


