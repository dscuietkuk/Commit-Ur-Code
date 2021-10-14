#include<iostream>
using namespace std;
bool isPowerof2(long long N){
    if(N==0)
    return false;
    return ((N&(N-1))==0);
}
string kangaroojump(long long N){
    if(isPowerof2(N))
    return "YES";
    else 
    return "NO";
}
int main(){
    int t;
    long long n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<kangaroojump(n)<<endl;
    }
    return 0;


}

