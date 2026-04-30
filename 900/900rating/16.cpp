#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> a(2*n);
        for(int i = 0; i < 2*n; i++) cin >> a[i];

        vector<vector<int>> pos(n);
        for(int i = 0; i < 2*n; i++){
            pos[a[i]].push_back(i);
        }

        int l = 2*n, r = -1;
        int ans = 0;

        vector<int> freq(n, 0);
        int bad = 0; // elements with freq = 1

        for(int k = 0; k < n; k++){
            int L = pos[k][0];
            int R = pos[k][1];

            // expand segment
            int nl = min(l, L);
            int nr = max(r, R);

            // add new elements into segment
            for(int i = nl; i <= nr; i++){
                if(i >= l && i <= r) continue;

                int val = a[i];
                freq[val]++;

                if(freq[val] == 1) bad++;
                else if(freq[val] == 2) bad--;
            }

            l = nl;
            r = nr;

            if(bad == 0) ans = k + 1;
            else break;
        }

        cout << ans << "\n";
    }

    return 0;
}