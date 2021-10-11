#include <iostream>
using namespace std;
bool canreach(int n){
   if(n==1)return true;
   else if(n==0 || n%2!=0)return false;
   return canreach(n/2);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i,j;
        cin>>n;
        canreach(n) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
       
    }
}
