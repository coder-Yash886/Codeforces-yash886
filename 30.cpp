#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    int countpositive = 0;
    int countnagetive = 0;
    int countodd = 0;
    int counteven = 0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            countnagetive++;
           
        }
         if(arr[i]>0){
            countpositive++;
        }
         
         if(arr[i]%2==0){
            counteven++;
        }
        else countodd++;
    }
    cout<<"Even: "<<counteven<<endl;
    cout<<"Odd: "<<countodd<<endl;
    cout<<"Positive: "<<countpositive<<endl;
    cout<<"Negative: "<<countnagetive<<endl;
   
}