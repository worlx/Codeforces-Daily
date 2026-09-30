#include<iostream>
using namespace std;


void recuur(int a){
    if(a<=1){
        cout << "1";
        return;}
    cout << a <<  " ";
    recuur(a-1);
}

int main(){
    int a;
    cin >> a;
    recuur(a);
    return 0;
}