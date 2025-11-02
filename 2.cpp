#include<iostream>
#include<string>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int totalcost = 0;
    for(int i=1;i<=w;i++){
         totalcost+= i*k;
    }
    int totalborrow = totalcost - n;
    if(totalborrow<0){
        totalborrow = 0;
    }
    
    
    cout<<totalborrow<<endl;

}