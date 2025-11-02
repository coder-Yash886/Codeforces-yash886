#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    string str1 = "Anton";
    string str2 = "Danik";
    string str3 = "Friendship";
    int countstr1 = 0;
    int countstr2 = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'A'){
            countstr1++;
        }
        else if(s[i] == 'D') countstr2++;
    }
    if(countstr1>countstr2){
        cout<<str1<<endl;
    }
    else if (countstr1==countstr2)cout<<str3<<endl;
    else cout<<str2<<endl;
    
}
