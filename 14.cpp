#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool flag = false;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int> sort1 = v;
        sort(sort1.begin(),sort1.end());

        if(k==1){
            if(v==sort1){
                flag = true;
            }
        }
        else {
            flag = true;
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        

    }
    return 0;
}
