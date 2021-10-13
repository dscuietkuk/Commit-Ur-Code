#include<iostream>
using namespace std;

int main() {
    int T, x;
    cin>>T;
    while(T--) {
        int n,m;
        cin>>n;
        cin>>m;
        if((m>2)&&(n>2)) {
            cout<<"NO"<<endl;        
        }
        else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}