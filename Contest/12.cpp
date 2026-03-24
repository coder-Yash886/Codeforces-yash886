#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        set<long long> s;
        for (int i=0;i<n;i++) {
            long long a;
            cin>>a;
            s.insert(a); 
        }
        int ans = 0, curr = 0;
        long long prev = INT_MIN;
        for (auto a : s) {
            if (a == prev + 1) {
                curr++;
            } else {
                curr = 1;
            }
            ans = max(ans, curr);
            prev = a;
        }
        cout<<ans<<endl;
    }
    return 0;
}
