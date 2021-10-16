#include<bits/stdc++.h>
#pragma GCC optimise("Ofast")
#pragma GCC target("avx","avx2","fma")
using namespace std;
#define int long long

void run(){
    int P,a,b,c,x,y;
    cin>>P>>a>>b>>c>>x>>y;
    int oneA = b+x*a;
    int oneC = c+y*a;
    int Ans = P/(min(oneA,oneC));
    cout<<Ans<<"\n";
}

signed main() {

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
      	run();
    }
    return 0;
}
