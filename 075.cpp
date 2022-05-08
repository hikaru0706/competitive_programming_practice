#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
long long N; 

vector<long long> prime_factors(long long N){
    long long rem=N;
    vector<long long> p;
    for(int i=2;i*i<N;i++){
        while(rem%i==0){
            p.push_back(i);
            rem/=i;
            cout<<rem<<' ';
            cout<<i<<' ';
        }
    }
    if(rem!=1LL) p.push_back(rem);
    return p;
}


int main() {
    cin>>N;
    int answer=0;
    vector<long long> p=prime_factors(N);

    for(int i=0;i<20;i++){
        if((1<<i)>=(int) p.size()) {
            answer=i;
            break;
        }
    }
    cout<<answer<<endl;
    return 0;
}