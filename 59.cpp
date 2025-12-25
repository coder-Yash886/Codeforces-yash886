#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str1;
        cin>>str1;
        int m;
        cin>>m;
        string str2,str3;
        cin>>str2>>str3;
        deque<int> dq;
        for(char ch : str1){
            dq.push_back(ch);
        }
        for(int i=0;i<m;i++){
            if(str3[i]=='V'){
                dq.push_front(str2[i]);
            }else{
            dq.push_back(str2[i]);
        }
        }
        for(char ch : dq){
            cout<<ch;
        }
        cout<<endl;
        
    }
}