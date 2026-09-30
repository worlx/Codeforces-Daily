#include<iostream>
using namespace std;

void recurrsion(int b){
    if(b<=0){return;}
    cout << "I love Recursion" << endl;
    recurrsion(b-1);
}

int main(){
    
    int b;
    cin >> b;
    recurrsion(b);
    return 0;
}