#include<bits/stdc++.h>
#pragma GCC optimise("Ofast")
#pragma GCC target("avx","avx2","fma")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
using namespace std;
#define int long long


void solve(){
    int N;
    cin>>N;
    string F,S;
    cin>>F;
    cin>>S;
    for(int i = 0 ; i < N ; i++){
        if((F[i] == '1') && (S[i] == '1')){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

signed main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--)
        solve();
    return 0;
}
