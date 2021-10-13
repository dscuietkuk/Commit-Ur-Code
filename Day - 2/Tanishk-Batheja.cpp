#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
      string s1;
      cin>>s1;
      string s2;
      cin>>s2;
       int c=0;
      for(int i=0;i<n;i++){
            if(s1[i]=='1' && s2[i]=='1'){
                cout<<"NO"<<endl;
                c=1;
                break;
            }
      }
      if(c==0)cout<<"YES"<<endl;
    
   }
   return 0;
}
