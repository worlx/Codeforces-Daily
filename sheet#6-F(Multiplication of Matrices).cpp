#include<iostream>
#include<vector>


using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    vector<vector<int>> matrticA(a,vector<int>(b,0));
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin >> matrticA[i][j];
        }
    }

    int a2,b2;
    cin >> a2 >> b2;
    vector<vector<int>> matrticB(a2,vector<int>(b2,0));
    for(int i=0;i<a2;i++){
        for(int j=0;j<b2;j++){
            cin >> matrticB[i][j];
        }
    }

    vector<vector<int>> ans(a,vector<int>(b2,0));
    for(int i=0;i<a;i++){
        for(int j=0;j<b2;j++){
           for (int k = 0; k<b; k++) { 
                ans[i][j] += matrticA[i][k] * matrticB[k][j];
            } 
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    

}