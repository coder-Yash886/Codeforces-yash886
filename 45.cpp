#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        for(;;){
        bool flag = false;
        string result = "";
        for(int i=0;i<str.size();){
            if(i+1<str.size() && str[i]=='A' && str[i+1]=='B'){
                i+=2;
                flag = true;

            }
            else if(i+1<str.size() && str[i]=='B' && str[i+1]=='B'){
                i+=2;
                flag = true;
            }else{
                result += str[i];
                i++;
            }
        }
        if(flag==false){
            cout<<result.size()<<endl;
            break;
        }
        str = result;
        }
        
    }
}