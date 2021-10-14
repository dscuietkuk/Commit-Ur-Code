#include<iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--) {
        int n,m;
        cin>>n;
        cin>>m;
        if((n==1)||(m==1)||((n==2)&&(m==2))) {
            cout<<"YES"<<endl;        
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
