#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    cout << fixed << setprecision(6);
    float a,b,c;
    cin >> a >> b >> c;
    float s = (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    if(area>0){cout <<"Valid"<< endl << area;}
    else{cout << "Invalid";}
    return 0;
}


