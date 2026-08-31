#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long a, b, x;
    cin >> a >> b >> x;

    if(a > b)
        swap(a, b);

    long long first = ((a + x - 1) / x) * x;
    long long last = (b / x) * x;

    if(first > last){
        cout << 0;
        return 0;
    }

    long long n = (last - first) / x + 1;

    long long sum = n * (first + last) / 2;

    cout << sum;

    return 0;
}