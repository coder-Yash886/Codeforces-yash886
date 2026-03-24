#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        long long h;
        cin>>n>>m>>h;
        vector<long long> v(n), v1(n);
        for (int i = 0; i < n; i++) {
            cin>>v[i];
            v1[i] = v[i];
        }
        vector<int>v3(n, 0);
        int d = 0;
        int t1 = 1;
        while (m--) {
            int b;
            long long c;
            cin>>b>>c;
            b--;
            long long val;
            if (v3[b]<d)
                val = v[b];
            else{
                val = v1[b];
            }
            val += c;

            if (val>h) {
                d = t1;
            } else {
                v1[b] = val;
                v3[b] = t1;
            }

            t1++;
        }
        for (int i=0;i<n;i++) {
            if (v3[i]<d)
                cout<<v[i]<<" ";
            else
                cout<<v1[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
