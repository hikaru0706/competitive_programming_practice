#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
int N; 
int const mod=100000007;
int main() {
    cin>>N;
    vector<vector<int>> A(N,vector<int>(6));
    for(auto &row_vec:A){
        for(auto &x:row_vec) cin>>x;
    }
    for(auto row_vec:A){
        for(auto x:row_vec) cout<<x<<' ';
        cout<<endl;
    }
    int answer=1;
    for(int i=0;i<N;i++){
        answer*=(A[i][0]+A[i][1]+A[i][2]+A[i][3]+A[i][4]+A[i][5]);
        cout<<answer<<endl;
        answer%=mod;
        }
    cout<<answer<<endl;
    return 0;
}