#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n>=1){
            if((n&(n-1)) == 0) cout<<"YES";
            else cout<<"NO";
            cout<<endl;
        }
        else cout<<"NO\n";
    }

    return 0;
}
