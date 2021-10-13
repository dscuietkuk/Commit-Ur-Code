#include <bits/stdc++.h>
using namespace std;
int isRotated(string s1,string s2){
    string comb=s1+s1;
    if(comb.find(s2)!=-1){
        return 1;
    }
    return 0;
}
int main() {
   int t;
   cin>>t;
   while(t--){
       string s1;
       cin>>s1;
       string s2;
       cin>>s2;
    cout<<isRotated(s1,s2)<<endl;
   }
}
