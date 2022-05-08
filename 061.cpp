#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
int Q,A[1<<20];
int cl=500000,cr=500000;
int main() {
    cin>>Q;
    int t[Q],x[Q];
    for(int i=0;i<Q;i++){
        cin>>t[i]>>x[i];
    }
    for(int i=0;i<Q;i++){
        if(t[i]==1){
            A[cr]=x[i];
            cr++;
        } 
        if(t[i]==2){
            cl--;
            A[cl]=x[i];
        }
        if(t[i]==3){
            cout<<A[cr-x[i]]<<endl;
        }
    }


    return 0;
}