// #include<iostream>
// using namespace std;
// int main(){
//     int y;
//     cin>>y;
//     if(y%2==0){          Meri Soch 
//         cout<<y+1<<endl;
//     }
//     else cout<<y+26<<endl;
// }

#include<iostream>
using namespace std;

int main() {
    int y;
    cin >> y;

    while (1) {
        y++; 

        int a = y / 1000;
        int b = (y / 100) % 10;
        int c = (y / 10) % 10;
        int d = y % 10;

        if (a != b && a != c && a != d &&
            b != c && b != d &&
            c != d) {
            cout << y << endl;
            break;
        }
    }
}
