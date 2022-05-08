#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
int N,M;

int main() {
    cin>>N>>M;
    vector<vector<int>> G(N);
    for(int i=0;i<M;i++){
        // vectorは添え字が0から始まることに注意
        int a,b;
        cin>>a>>b;
        a--,b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int answer=0;
    for(int i=0;i<N;i++){
        int cnt=0;
        for(int j :G[i]){
            if(j<i) ++cnt;
        }
        if(cnt==1) answer++; 
    }
    cout<<answer<<endl;

    return 0;
}