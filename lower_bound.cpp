#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
 
int N,K;
int main() {
    cin>>N>>K;
    int A[N];
    for(int i=0;i<N;i++) cin>>A[i];
    int pos =lower_bound(A,A+N,K)-A;
    cout<<pos<<endl;

    return 0;
}
