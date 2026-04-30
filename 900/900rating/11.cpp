#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

       int lo = 1, hi = 3*n;
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            ans.push_back(lo);    
            ans.push_back(hi - 1);   
            ans.push_back(hi);       

            lo++;
            hi -= 2;
        }

        for(int x : ans)cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}