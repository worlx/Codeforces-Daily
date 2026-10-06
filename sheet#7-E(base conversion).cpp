#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        string  b = "";
        while(a>0){
        b += (a % 2 ? '1' : '0');
        a/=2;
        }
        reverse(b.begin(), b.end());
        cout << b <<"\n";
    }
    return 0;
}