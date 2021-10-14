#include<bits/stdc++.h>
using namespace std;
string solve(string& s1, string& s2) {
    if(s1.length()!=s2.length())
        return "NO";
    int n=s1.length();
    int lps[n];
    lps[0]=0;
    for(int i=1,len=0;i<n;){
        if(s1[i]==s2[len])
            lps[i++]=++len;
        else if(len==0)
            lps[i++]=0;
        else
            len=lps[len-1];
    }
    for(int i=0,j=lps[n-1];j<n;++i,++j)
        if(s1[i]!=s2[j])
            return "NO";
    return "YES";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<solve(s1,s2)<<'\n';
    }
    return 0;
}
