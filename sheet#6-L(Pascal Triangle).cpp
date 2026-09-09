#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << 1;
        return 0;
    }
    vector<vector<int>> ans(n,vector(n,0));
    ans[0][0] = 1;
    ans[1][0] = 1;
    ans[1][1] = 1;

    for(int i=0;i<2;i++){
        for(int j = 0;j<=i;j++){cout << ans[i][j] << " ";}
        cout << endl;
    }

    for(int i=2;i<n;i++){
        ans[i][0] = 1;
        cout << ans[i][0] << " ";
        for(int j=1;j<=i;j++){
            ans[i][j] = ans[i-1][j-1]+ans[i-1][j];
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

