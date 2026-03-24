#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int> v1(n);
        map<int,int>freq;
        for (int i=0;i<n;i++) {
            cin>>v1[i];
            freq[v1[i]]++;
        }
        int remove = n-(k-1);
        int ans = 0;
        while (freq[ans]>remove) { 
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
