#include<iostream>
#include <climits>
#include<vector>

using namespace std;

bool prime_num(int a){
    if(a < 2){return false;}
    if(a == 2){return true;}
    if(a%2 == 0){return false;}
    for(int i=3;i<=a/2;i=i+2){if(a%i==0){return false;}}
    return true;
}
int greater_divisors(int a){
    int c = 0;
    for(int i=1;i<a;i++){if(a%i==0){c++;}}
    return c;
}
bool is_palindrome(int a){
    int copy = a;
    int reverse = 0;
    while (a){
        reverse = reverse*10 + a%10;
        a/=10;
    }
    return reverse == copy;
}

int main(){
    int n;
    cin >> n;
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    int pali = 0,prime = 0,max_div = 0,divisor = 0;

    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(prime_num(arr[i])){prime++;}
        if(is_palindrome(arr[i])){pali++;}
        maximum = max(maximum,arr[i]);
        minimum = min(minimum,arr[i]);
        int e =  greater_divisors(arr[i]);
        if(e > divisor || (e == divisor && arr[i] > max_div)){ max_div = arr[i];divisor = e;}
    }

    cout <<"The maximum number : "<< maximum << '\n'
<<"The minimum number : "<<minimum<<'\n'
<<"The number of prime numbers : "<<prime<<'\n'
<<"The number of palindrome numbers : "<<pali<<'\n'
<<"The number that has the maximum number of divisors : "<<max_div<<'\n';


    return 0;
}