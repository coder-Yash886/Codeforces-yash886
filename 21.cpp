#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

    int n,m,p;
    cin>>n>>m>>p;

    vector<long long>v;
    v.push_back(n);
     v.push_back(m);
      v.push_back(p);

      sort(v.begin(),v.end());
      for(int i=0;i<v.size();i++){
        cout<<v[0]<<" "<<v[v.size()-1]<<endl;
        break;
      }



      // optimal solution
//       #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int A, B, C;
//     cin >> A >> B >> C;
//     cout << min({A, B, C}) << " " << max({A, B, C});
//     return 0;
// }



}