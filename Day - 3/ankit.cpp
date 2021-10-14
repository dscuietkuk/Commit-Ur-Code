#include<bits/stdc++.h>
using namespace std;
string solve(int n, int m) {
    if(n==1 || m==1 || (n==2 && m==2))
        return "YES";
    return "NO";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cout<<solve(n,m)<<'\n';
    }
    return 0;
}
