#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int maxi = INT_MIN;
    int maxidx = 0;
    int mini = INT_MAX;
    int minidx = 0;

    for(int i=0;i<n;i++){
        if(ans[i]>maxi){
            maxi = ans[i];
            maxidx = i;
        }
    }
    for(int i=0;i<n;i++){
        if(ans[i]<=mini){
            mini = ans[i];
            minidx = i;
        }
    }
    int moves = maxidx + (n-1-minidx);

    if(maxidx>minidx){
        moves--;
    }

    cout<<moves<<endl;

}