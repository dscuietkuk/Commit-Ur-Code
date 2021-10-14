#include <bits/stdc++.h>
using namespace std;

bool canReachOrNot(int Distance){

   if(Distance==1)
    return true;
   else if(Distance==0 || Distance%2!=0)
    return false;
   return canReachOrNot(Distance/2);
}
int main() {
    int testcase;
    cin>>testcase;

    while(testcase--){
        int distance;
        cin>>distance;
        canReachOrNot(distance) ? cout<<"YES"<<endl : cout<<"NO"<<endl;

    }
}
