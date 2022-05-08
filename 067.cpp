#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
long long K;
string N;
long long eight_to_ten(string S){
    int answer=0;
    for(int i=0;i<S.size();i++){
        answer=int(S[i]-'0')+answer*8;
        cout<<answer<<endl;
    }
    return answer;
}

string ten_to_nine(long long N){
    string answer;
    if(N==0){
        return "0";
    }
    while(N>0){
        answer=char(N%9+'0')+answer;
        N/=9;
        cout<<answer<<endl;
    }
    return answer;
}

int main() {
    cin>>N>>K;
    for(int i=0;i<K;i++){
        N=ten_to_nine(eight_to_ten(N));
        for(int i=0;i<N.size();i++){
            if(N[i]=='8') N[i]='5'; 
        }
    }
    cout<<N<<endl;
    return 0;
}