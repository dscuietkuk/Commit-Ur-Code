#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==0) cout<<"NO";
        else if((n&(n-1)) == 0) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }

    return 0;
}