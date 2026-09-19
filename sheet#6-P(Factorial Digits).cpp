#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += log10(i);
    }

    int digits = floor(sum) + 1;

    cout << "Number of digits of " << n << "! is " << digits;

    return 0;
}