#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)

int N,K,A[1<<20],B[1<<20];
vector<int> vec;

int main() {
    cin>>N>>K;
    for(int i=0;i<N;i++){
        cin>>A[i]>>B[i];
        vec.push_back(B[i]);
        vec.push_back(A[i]-B[i]);
    }
    long long answer=0;
    sort(vec.begin(),vec.end(),greater<int>());
    for(int i=0;i<K;i++) answer+=vec[i];

    cout<<answer<<endl;

    return 0;
}