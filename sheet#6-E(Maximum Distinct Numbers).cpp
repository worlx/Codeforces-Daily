#include<iostream>
using namespace std;
int main(){
    long long a,ans,sum = 0;
    ans = 1;
    cin >> a;
    while(sum<=a){
        sum+=ans;
        ans++;
    }
    cout << ans-2;
    return 0;
}