#include<bits/stdc++.h>
using namespace std;    // siliding window
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sum = 0;
    for(int i=0;i<k;i++){
        sum += v[i];
    }
    int maxsum = sum;
    int maxidx = -1;
    int i=1;
    int j = k;
    while(j<n){
        sum += v[j] - v[i-1];
        if(maxsum<sum){
            maxsum = sum;
            maxidx = i;
        }
        i++;
        j++;
    }
    cout<<maxsum<<" "<<maxidx<<endl;

}