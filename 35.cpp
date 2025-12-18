#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int counteven = 0;
        int countodd = 0;
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                counteven++;
            }
            else{
                countodd++;
            }
        }
        
         if(n%2==0){
            int operation = n/2;
            cout<<abs(counteven-operation)<<endl;

        }
        else if(n%2!=0){
            cout<<-1<<endl;
        }
    }
}