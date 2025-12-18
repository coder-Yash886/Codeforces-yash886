// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n,m;
//     cin>>n>>m;
//     int fullsum = 0;
//     int vecsum = 0;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
    
//     sort(v.begin(),v.end());
//     fullsum = m*(m+1)/2;
//     for(int i=0;i<m-1;i++){
//        vecsum += v[i];
//     }
//     int missno = fullsum+vecsum;
//     cout<<missno<<endl;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<bool>present(2*m+1,false);
    for (int i=0;i<n;i++) {
        present[v[i]+m] = true;
    }
    for (int x=-m;x<=m;x++) {
        if (!present[x + m]) {
            cout<<x<<endl;
            break;
        }
    }

    return 0;
}
