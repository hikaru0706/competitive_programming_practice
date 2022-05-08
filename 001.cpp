#include <iostream>
#include <vector>
#include <cmath>
#define REP(i,n) for(int i=0; i<(n); i++)
int N,K;
long long L; 
std::vector<long long>A;
bool solve(long long M){
    std::cout<<"called"<<std::endl;
    long long pre=0;
    int cnt=0;
    for(int i=0;i<N;i++){
        if(A[i]-pre >=M && L-A[i]>=M){
            std::cout<<A[i]<<std::endl;
            pre=A[i];
            cnt++;
        }
        std::cout<<i<<std::endl;
    }
    if(cnt>=K) return true;
    return false;
}

int main() {
    std::cin>>N>>L;
    std::cin>>K;
    std::vector<long long>A(N);
    for(long long &x:A) std::cin>>x;
    
    long long left =-1;
    long long right =L+1;

    while(right-left>1){
        std::cout<<left<<' '<<right<<std::endl;
        long long mid=left + (right+left)/2;
        if(solve(mid)) left =mid;
        right =mid;
    }
    std::cout<<left<<std::endl;

    return 0;
}