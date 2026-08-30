#include<iostream>
using namespace std;
int main(){
    long long n,ans ;
    cin >> n;
    ans = 0;
    for(long long i = 1; i*i<=n; i++){
        if(n%i == 0 ){ans += i;
            if (i != n / i) {
                ans += n / i;}
        }}
   cout << ans;
}