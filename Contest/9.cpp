#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n, k;
        cin>>n>>k;
        if (k>n) {
            cout<<-1<<endl;
            continue;
        }
        long long minimum = 0;
        while (n>k) {
            n = (n+1)/2;
            minimum++;
        }
        if (n==k){
            cout<<minimum<<endl;

        } 
        else{
            cout<<-1<<endl;
        };
    }
    return 0;
}
