#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        string s1 , s2;
        cin>>s1>>s2;
        if(s1.length() != s2.length()) {cout<<"NO"; break;}
        string s3 = s1 + s1;
        if(s3.find(s2) == string::npos) cout<<"NO";
        else cout<<"YES";
        cout<<endl;


    }
    

    return 0;
}







