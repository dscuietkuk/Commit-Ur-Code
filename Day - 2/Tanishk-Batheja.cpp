#include <iostream>
using namespace std;
bool canCompleteLevel(int n,char a[2][100],int i,int j){
    if(i==2 || j==n)
    { 
        return false;
    }
    if(i==1 && j==n-1)
    {
        return true;
    }
    if(a[i][j]=='1')
    {
        return false;
    }
    if(i-1>=0 && a[i-1][j]!='1'){
    bool fromtop=canCompleteLevel(n,a,i-1,j);
    if(fromtop)return true;
    }
   
    
    
    if(j+1<n && a[i][j+1]!='1'){
    bool fromRight=canCompleteLevel(n,a,i,j+1);
    if(fromRight)return true;
    }
    if(i+1<2 && a[i+1][j]!='1'){
    bool fromDown=canCompleteLevel(n,a,i+1,j);
    if(fromDown)return true;
    }
    if(i+1<2 && j+1<n && a[i+1][j+1]!='1')
    {
        bool fromDiag1=canCompleteLevel(n,a,i+1,j+1);
        if(fromDiag1)return true;
    }
    if(i-1>=0 && j+1<n && a[i-1][j+1]!='1')
    {
        bool fromDiag2=canCompleteLevel(n,a,i-1,j+1);
        if(fromDiag2)return true;
    }
   if(i+1<2 && j-1>=0 && a[i+1][j-1]!='1')
    {
        bool fromDiag3=canCompleteLevel(n,a,i+1,j-1);
        if(fromDiag3)return true;
    }
      if(i-1>=0 && j-1>=0 && a[i-1][j-1]!='1')
    {
        bool fromDiag4=canCompleteLevel(n,a,i-1,j-1);
        if(fromDiag4)return true;
    }
    
    


    return  false;

   
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[2][100];
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        canCompleteLevel(n,a,0,0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}
