#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    if(s== '+'){
        int d = a+b;
        if(c==d){
            cout<<"Yes"<<endl;
        }else{
            cout<<d<<endl;
        }
    }
    if(s=='-'){
        int e = a-b;
        if(c==e){
            cout<<"Yes"<<endl;
        }else{
            cout<<e<<endl;
        }
    }

    if(s=='*'){
        int f = a*b;
        if(c!=f){
        cout<<f<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
      }

