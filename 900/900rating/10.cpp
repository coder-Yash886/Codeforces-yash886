#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        vector<int> v(7);
        int sum = 0;
        
        for(int i=0;i<7;i++) {
            cin>>v[i];
            sum += v[i];
        }

        int maximum = *max_element(v.begin(), v.end());

        int ans = 2 * maximum-sum;
        cout<<ans<< endl;
    }
    return 0;
}