#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    for (long long p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            int cnt = 0;

            while (n % p == 0) {
                n /= p;
                cnt++;
            }

            cout << "(" << p << "^" << cnt << ")";
            
            if (n > 1)
                cout << "*";
        }
    }

    // If something greater than 1 remains, it is a prime factor
    if (n > 1) {
        cout << "(" << n << "^1)";
    }

    return 0;
}