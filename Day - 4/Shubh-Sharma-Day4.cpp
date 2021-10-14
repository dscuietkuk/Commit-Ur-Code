#include <bits/stdc++.h>
using namespace std;
int isRotatedOrNot(string s1,string s2){
    string comb=s1+s1;
    if(comb.find(s2)!=-1){
        return 1;
    }
    return 0;
}
int main() {
   int testcase,check;
   cin>>testcase;
   while(testcase--){
       string s1;
       cin>>s1;
       string s2;
       cin>>s2;
       check = isRotatedOrNot(s1,s2);
       check==1 ? cout<<"YES"<<endl : cout<<"NO"<<endl;
   }
}
