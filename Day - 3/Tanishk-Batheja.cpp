#include <iostream>
using namespace std;
bool canSolve(int n,int m){
    if(n==1 || m==1)
    {
        return true;
    }
    else if(n==2 && m==2)
    {
        return true;
    }
    return false;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        canSolve(n,m) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}
