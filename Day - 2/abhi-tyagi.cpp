#include<iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--) {
        int N=0, x=0;
        cin>>N;
        string a,b;
        cin>>a;
        cin>>b;
        for(int i=0;i<N;++i) {
            if((a[i] == '1') && (b[i] == '1')){
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
