#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
int N,P,Q;

int main() {
    cin>>N>>P>>Q;
    vector<int> A(N);
    for(int x:A) cin>>x;
    for(int x:A) cout<<x<<' ';
    cout<<endl;
    int answer=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            for(int k=0;k<j;k++){
                for(int l=0;l<k;l++){
                    for(int m=0;m<l;m++){
                        if(1LL*A[i]*A[j]%P*A[k]%P*A[l]%P*A[m]%P==Q) answer++;
                    }
                }
            }
        }
    }
    cout<<answer<<endl;
    return 0;
}