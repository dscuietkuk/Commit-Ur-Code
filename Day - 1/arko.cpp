#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>=1){
            if((n&(n-1)) == 0) cout<<"YES";
            else cout<<"NO";
            cout<<endl;
        }
        else cout<<"NO";    
    }

    return 0;
}
