#include<iostream>
using namespace std;

int main(){
   int T;
   cin>>T;
   while(T--){
       long long N;
       cin>>N;

       if((N & (N-1)) ==0)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
   }
   return 0;
}
