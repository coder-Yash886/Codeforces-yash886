#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> ans;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans.push_back(x); 
    }

    sort(ans.begin(), ans.end());

    for(int i=0;i<n;i++){
        cout<<ans[i]<< " ";
    }
}