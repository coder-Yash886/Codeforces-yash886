// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         string str;
//         int count0= 0;
//         cin>>str;
//             for(int i=0;i<=k;i++){
//                 if(str[i]=='0'){
//                     count0++;
//                 }

//             }
//             cout<<count0<<endl;
//     }

// }


#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int c=0,a=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='1') a=max(a,i+k);
            else if(i>a) c++;
        }
        cout<<c<<endl;
    }
}
