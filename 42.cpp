#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = 0;
    int b = 1;
    int c;
    if(n==0){
        cout<<0<<" "<<0<<" "<<0<<endl;
        return 0;
    }
    if(n==1){
        cout<<1<<" "<<0<<" "<<0<<endl;
        return 0;
    }
    if(n==2){
        cout<<1<<" "<<1<<" "<<0<<endl;
        return 0;
    }
    for(int i=2;i<=n/2+1;i++){
        c = a+b;
        a = b;
        b = c;
    }
    
    long long  d = b-a;
    long long e = a-d;
    long long f =  d-e;
    cout<<abs(f)<<" "<<abs(e)<<" "<<abs(a)<<" "<<endl;


    }

    // #include<bits/stdc++.h>
    // using namespace std;
    // int n;
    // cin>>n;
    // cout<<0<<0<<n<<endl;  optimal solution₹

