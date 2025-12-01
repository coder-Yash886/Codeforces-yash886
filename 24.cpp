#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long sum = 0;
    
    // vector<long long>v = {a,b,c,d};
    //   long long result = 1;
    //    for(int i=0;i<v.size();i++){
    //     result = (result*v[i])%100;

    //    }
    // if (result < 10)
    //     cout<<"0"<<result<<endl;
    // else
    //     cout<<result<<endl;

    long long result = 1;
    result = (result * a) % 100;
    result = (result * b) % 100;
    result = (result * c) % 100;
    result = (result * d) % 100;

 if (result < 10)
        cout<<"0"<<result<<endl;
    else
        cout<<result<<endl;



      }

