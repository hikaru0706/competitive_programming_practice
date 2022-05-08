#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)

int N,Q;
int L[1<<20],R[1<<20],V[1<<20];
int main() {
    cin>>N>>Q;
    vector<int> A(N);
    for(auto x:A) cin>>x;
    vector<int> B(N);
    for(int i=1;i<=N;i++){
         B[i]=A[i]-A[i-1];
    } 
    for(int i=0;i<Q;i++){
        for(int i=1;i<=N;i++) cout<<B[i]<<' ';
        
        cin>>L[i]>>R[i]>>V[i];
        if(R[i]<=N-1) B[R[i]+1]-=V[i];
        B[L[i]]+=V[i];


        int answer=0;
        for(int i=1;i<=N;i++){
        answer+=B[i];
        }
        cout<<answer<<endl;
    }

    return 0;
}