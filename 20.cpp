#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

    int n,m;
    cin>>n>>m;
    long long firstdigit = n%10;
    long long lastdigit = m%10;
    cout<<(firstdigit+lastdigit)<<endl;


}