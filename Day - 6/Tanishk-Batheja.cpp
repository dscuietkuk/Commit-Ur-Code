#include <bits/stdc++.h>
using namespace std;
int maxCracker(int p,int a,int b,int c,int x,int y){
    int anar=b+x*a;
    int rocket=c+y*a;
    int m=min(anar,rocket);
    return p/m;

   
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;
       cout<<maxCracker(p,a,b,c,x,y)<<endl;
        
    }
}
