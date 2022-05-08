#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)

int H,W;

int main() {
    cin>>H>>W;
    vector<vector<int>> A(H,vector<int>(W)),B(H,vector<int>(W));
    for(auto &row_vec:A){
        for(auto &x:row_vec) cin>>x;
    }
    for(auto &row_vec:B){
        for(auto &x:row_vec) cin>>x;
    }
    long long ans=0;
    for(int i=0;i<H-1;i++){
        for(int j=0;j<W-1;j++){
            int d = B[i][j]-A[i][j];
            A[i][j]+=d;
            A[i+1][j]+=d;
            A[i][j+1]+=d;
            A[i+1][j+1]+=d;
            ans+=abs(d);
        }
    }
    if(A==B) {
        cout<<"Yes"<<endl;
        cout<<ans<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}