#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;

        int cnt1 = 0;
        int cnt2 = 0;

        for(int i=0;i<n;i++){
            if(str[i] == '('){
                cnt1++;
            }else{
                cnt2++;
            }
        }
        if(cnt1 == cnt2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}