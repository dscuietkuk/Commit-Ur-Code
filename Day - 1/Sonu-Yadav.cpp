#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t>0){
    long long int n;
    cin>>n;
    long long int x=1,c=0;
    if(n==0){
        cout<<"No"<<endl;
        c=1;
    }
    while(x<=n){
        if(x==n){
            cout<<"Yes"<<endl;
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
