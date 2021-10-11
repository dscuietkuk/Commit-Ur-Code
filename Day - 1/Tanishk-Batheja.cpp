#include <iostream>
using namespace std;
bool cansearch(long long n){
     if(n==1){
      return true;
  }
  else if(n==0 || n%2 != 0)
   {
       return false;
   }

   return cansearch(n/2);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cansearch(n)?cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}
