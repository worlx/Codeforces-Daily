#include<iostream>
using namespace std;
int main(){
    string n;
    long long m;
    cin >> n >> m;
 

    long long rem = 0;
    for(char c:n){rem = (rem*10 + (c-'0'))%m;}
    if(rem == 0){cout << "YES";}
    else{cout << "NO";}
    return 0;
}