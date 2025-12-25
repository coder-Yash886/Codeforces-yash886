// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int k,s;
//     cin>>k>>s;
//     if(s==0){
//         cout<<0<<endl;
//     }
//    else  if(s==1 && k==1){
//         cout<<1<<endl;
//     }
//     else{
//     long long a = k-s;
//     cout<<3*a<<endl;
//     }
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,s;
    cin>>k>>s;
    long long count = 0;
    for(int x=0;x<=k;x++){
        for(int y=0;y<=k;y++){
            int z = s-x-y;
            if(z>=0 && z<=k){
                count++;
            }
        }
    }
    cout<<count<<endl;
}