#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> o2, o3, b, ne;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;

            bool d2 = (x % 2 == 0);
            bool d3 = (x % 3 == 0);

            if(d2 && d3)b.push_back(x);
            else if(d2) o2.push_back(x);
            else if(d3) o3.push_back(x);
            else        ne.push_back(x);
        }

        vector<int> ans;
        for(int x : b)    ans.push_back(x);
        for(int x : o2)   ans.push_back(x);
        for(int x : ne) ans.push_back(x);
        for(int x : o3)   ans.push_back(x);

        for(int x : ans) cout<<x<< " ";
        cout<<endl;
    }

    return 0;
}