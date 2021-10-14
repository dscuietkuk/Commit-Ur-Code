#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isPowerOfTwo (long long x) 
    { 
        if(x==0)
        return false;
        return ((x&(x-1))==0);
    } 
    
    string canJump(long long N) {
        
        if(isPowerOfTwo(N))
            return "YES";
        else
            return "NO";
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.canJump(N)<<endl;
    }
    return 0;
}
