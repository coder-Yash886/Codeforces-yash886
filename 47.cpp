#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      string str;
      cin>>str;
      if(str.find("1100") != string::npos){
        cout<<"NO"<<endl;
      }
      else cout<<"YES"<<endl;
    }
    return 0;
}