#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        if(k==0) {
            cout<<"YES"<<endl;
            continue;
        }
        if(n<=2*k){
            cout<<"NO"<<endl;
            continue;
        }
        bool check = true;
        for(int i=0;i<k;i++){
            if(str[i]!=str[n-1-i]){
                check = false;
                break;
            }
        }
        if(check==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}