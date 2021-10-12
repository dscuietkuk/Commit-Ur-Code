#include<iostream>
using namespace std;

int main() {
    int T, x;
    cin>>T;
    while(T--) {
        int N=0;
        cin>>N;
        int a[N];
        int b[N];
        for(int i=0;i<N;++i) {
            cin>>a[i];
        }
        for(int i=0;i<N;++i) {
            cin>>b[i];
        }
        for(int i=0;i<N;++i) {
            if((a[i]==b[i])&&(a[i]==1)) {
                x=1;
                break;
            }
            else {
                x=0;
            }
        }
        if(x==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}