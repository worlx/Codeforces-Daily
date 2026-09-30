#include<iostream>
using namespace std;


void recuur(int a,int i = 1){
    if(a<=0){return;}
    cout << i <<"\n";
    recuur(a-1,i=i+1);
}

int main(){
    int a;
    cin >> a;
    recuur(a);
    return 0;
}