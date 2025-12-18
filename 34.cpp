#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   set<int>s(v.begin(),v.end());
   int dis = (int)s.size();
   int ans = -1;
   for(set<int>::iterator it = s.begin(); it!= s.end(); it++){
    if(*it>=dis){
        ans = *it;
        break;
    }
   }
   cout<<ans<<endl;
}
   return 0;
   

}

