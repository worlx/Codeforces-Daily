#include<iostream>
using namespace std;

void recur(long long a){
    if(a == 0){
        return;}
    recur(a/10);
    cout << a%10 << " ";
}

int main(){
    int n;
    cin >> n;
    while(n--){
        long long a;
        cin >> a;
        if (a == 0) {
         cout << "0\n";
         continue;
        }
        recur(a);
        cout << "\n";
    }
    return 0;
}