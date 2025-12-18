#include<iostream>
#include<vector>
using namespace std;

int main() {
   int n,m,a;
   cin>>n>>m>>a;
//    bool flag = true;
//    vector<int>v = {n,m,a};
//    for(int i=0;i<v.size();i++){
//     if(v[i]!=v[i+1]){
//         cout<<v[i+1]<<"\n";
//         break;
//     }
   

   //}
   long long x = (n+a-1)/a;
   long long y = (m+a-1)/a;
   cout<<x*y<<endl;
   return 0;
}