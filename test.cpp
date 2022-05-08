#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
 
int main() {
    int N;
    cin>>N;
    vector<int>A(N);
    for(auto &x:A) cin>>x;
    for(auto y:A) cout<<y<<' ';
    cout<<endl;
    return 0;
}