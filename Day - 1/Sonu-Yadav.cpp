#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t>0){
    int n;
    cin>>n;
    int x=1,c=0;
    if(n==0){
        cout<<"YES"<<endl;
        c=1;
    }
    while(x<=n){
        if(x==n){
            cout<<"YES"<<endl;
            c=1;
            break;
        }
        else{
            x+=x;
        }
    }
    if(c==0){
        cout<<"NO"<<endl;
    }
    t--;
}
}
