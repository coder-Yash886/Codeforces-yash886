#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long sum = 0;
    int maximum = *max_element(v.begin(),v.end());
    for(int i=0;i<n;i++){
         sum += maximum - v[i];
    }
    cout<<sum<<endl;
    return 0;

}
