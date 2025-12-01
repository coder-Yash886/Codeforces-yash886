#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    string f1,s1;
    string f2,s2;
    cin>>f1>>s1>>f2>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2){
        cout<<"ARE Brothers"<<endl;
    }
    else cout<<"NOT"<<endl;
    
      }

