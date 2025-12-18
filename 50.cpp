#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    map<char,int>freq;
    for(char c: str){
     freq[c]++;
    }
    for(char c='A';c<='Z';c++){
        if(freq.count(c)){
            cout<<c<<" "<<freq[c]<<endl;
        }
    }
    for(char c='a';c<='z';c++){
        if(freq.count(c)){
            cout<<c<<" "<<freq[c]<<endl;
        }
    }
    return 0;

}