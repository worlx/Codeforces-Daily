#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
    long long n,m;
    cin >> n >>m;
    
    cout << gcd(m,n) <<" "<< lcm(m,n);
    return 0;
}