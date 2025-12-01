#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    char str;
    cin>>str;
    // if(str=='a'){
    //     cout<<char(toupper(str))<<endl;
    // }
    // else cout<<char(tolower(str))<<endl;

    if(str>='a' && str<='z'){
        cout<<char(str-32)<<endl;
    }
    else cout<<char(str+32)<<endl;

      }

