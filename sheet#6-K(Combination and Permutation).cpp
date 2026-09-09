#include<iostream>
using namespace std;

long long factorial(int a){
    long long ans = 1;
    for (int i = 1; i <= a; i++){ans *= i;}
    return ans;
}

int main(){
    int a,b;
    cin >> a >> b;
    long long NCR,NPR;
    NPR = factorial(a)/factorial(a-b);
    NCR = NPR/factorial(b);

    cout << NCR << " " << NPR;
    return 0;
}