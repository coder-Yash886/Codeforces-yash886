// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n>>k;
//     int lastdigit = 0;
//     for(int i=0;i<k;i++){
//      lastdigit = n/10;
//      if(lastdigit==0){
//         n = n/10;
//     }
//     else {
//         n = n-1;
//     }
//     }
// //     for(int i=0;i<k;i++){
    
// // }   
//     cout<<n<<endl;

// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < k; i++){
        if(n % 10 == 0)
            n /= 10;
        else
            n--;
    }
    cout << n << endl;
}
