#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int A,B,C,D,E,F,X;

int main() {
    cin>>A>>B>>C>>D>>E>>F>>X;

    int dist_takahashi=0;
    int dist_aoki=0;

    for(int i=1;i<=X;i++){
        if(i%(A+C)<=A) dist_takahashi+=B;
        if(i%(D+F)<=D) dist_aoki+=E;
    }

    if(dist_takahashi>dist_aoki) cout<<"Takahashi"<<endl;
    else if(dist_aoki>dist_takahashi) cout<<"Aoki"<<endl;
    else cout<<"Draw"<<endl;

    return 0;
}