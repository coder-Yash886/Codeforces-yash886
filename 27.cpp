#include<iostream>
#include<cmath>
using namespace std;

int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long double e = b*logl((long double)a);
    long double f = d*logl((long double)c);

    if(e>f){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
