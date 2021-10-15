#include <bits/stdc++.h>
using namespace std;
int maxCracker(long long p,long long a,long long b,long long c,long long x,long long y){
    int anar=b+x*a;
    int rocket=c+y*a;
    int m=min(anar,rocket);
    return p/m;

   
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long long p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;
       cout<<maxCracker(p,a,b,c,x,y)<<endl;
        
    }
}
