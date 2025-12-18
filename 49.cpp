// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         sort(v.begin(),v.end());
//         for(int i=0;i<n;i++){
//             if(v[i]!=v[i+1]){
//                 cout<<1<<endl;
//                 break;
//             }
//             if(n==1){
//                 cout<<1<<endl;
//             }

//         }
//     }
// } 


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        for (int i=0; i<n; i++) {
            cin >> v[i];
        }

        unordered_map<int, int> freq;
        for (int x : v) {
            freq[x]++;
        }

        int distinct = freq.size();
        int maxFreq = 0;

        for (auto &p : freq) {
            maxFreq = max(maxFreq, p.second);
        }

        int ans = max(
            min(maxFreq - 1, distinct),
            min(maxFreq, distinct - 1)
        );

        cout<<ans<<endl;
    }
    return 0;
}
