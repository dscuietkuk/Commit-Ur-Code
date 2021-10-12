#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        
        int n;
        int count=0;
        string a;
        string b;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        
        for(int i=0;i<n;i++){
            if(a[i]=='1' && b[i]=='1'){
                cout<<"NO\n";
                count=1;
                break;
            }
        }
        if(count == 0)
            cout<<"YES\n";
    }
    return 0;
}
