// #include<iostream>
// #include<cmath>
// using namespace std;

// int fib(int n){
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     return fib(n-1)+fib(n-2);
// }

// int main() {
//    int n;
//    cin>>n;
//    cout<<fib(n)<<endl;
   
// }

// Most optimised code 

#include<iostream>
#include<cmath>
using namespace std;

int main() {
   int n;
   cin>>n;
   if(n==1){
    cout<<0<<endl;
    return 0;
   }
   if(n==2){
    cout<<1<<"\n";
    return 0;
   }

   long long a = 0, b =1 ,c;
   for(int i=3;i<=n;i++){
    c = a+b;
    a = b;
    b = c;
   }
   cout<<b<<"\n";
   return 0;
   
}


