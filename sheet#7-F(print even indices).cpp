#include<iostream>
#include<vector>
using namespace std;

void even_int(vector<int> arr,int a = 0){
    if(a%2!=0 && a==arr.size()-1){return;}
    if(a>=arr.size()){return;}
    even_int(arr,a=a+1);
    if(a%2==0){cout<<arr[a]<< " ";}
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){cin>>arr[i];}
    even_int(arr);
    cout << arr[0];
    return 0;
}