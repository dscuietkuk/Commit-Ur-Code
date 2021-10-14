#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        
        if(n==1 || m==1 || (n==2 && m==2))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
