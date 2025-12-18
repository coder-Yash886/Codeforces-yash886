#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        long long mod = (n-y)/x;

        cout<<(mod*x)+y<<endl;
    }

}
