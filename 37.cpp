#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        // if(s1>s2 && s1>s4 && s3>s2 && s3>s4){
        //     cout<<"YES"<<endl;
        
        // }
        // else if(s2>s1 && s2>s4 && s3>s1 && s3>s4){
        //     cout<<"YES"<<endl;
        
        // }
        // else if(s2>s1 && s2>s3 && s4>s1 && s4>s3){
        //     cout<<"YES"<<endl;
            
        // }
        // else if(s1>s2 && s1>s3 && s4>s2 && s4>s3){
        //     cout<<"YES"<<endl;
            
        // }
        // else{
        //     cout<<"NO"<<endl;
            
        // }
        int a = max(s1,s2);
        int b = max(s3,s4);

        vector<int> v = {s1,s2,s3,s4};
        sort(v.begin(),v.end());
        int mx1 = v[3];
        int mx2 = v[2];

        if((a==mx1 && b==mx2) || (a==mx2 && b==mx1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}