#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(ll a, ll b, int B) {
    return B/min(a,b);
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        int B,c1,c2,c3,x,y;
        cin>>B>>c1>>c2>>c3>>x>>y;
        cout<<solve(c2+1LL*x*c1,c3+1LL*y*c1,B)<<'\n';
    }
    return 0;
}
