#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        
        int a[2][n];
        
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        
        
        bool check  = false;
        
            for(int j=0;j<n;j++){
                if(a[0][j+1]==1 && a[1][j+1]==1)
                {
                   
                   check = true;    
                  break;
                }
                
            }
            
        
        
        if(!check)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
