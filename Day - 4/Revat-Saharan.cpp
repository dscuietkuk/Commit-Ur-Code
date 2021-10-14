#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        cin>>b;
        
        if(a.size()!=b.size())
            cout<<"NO\n";
        else{
            string n = a+a;
            if(n.find(b)!=-1)
                cout<<"YES\n";
            else cout<<"NO\n";
        }
        
    }
    return 0;
}
