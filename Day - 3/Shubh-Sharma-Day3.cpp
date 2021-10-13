#include<bits/stdc++.h>
using namespace std;

int main(){
    int Testcase;
    cin>>Testcase;
    while(Testcase--){
        int row,column;
        cin>>row>>column;
        
        (row==1 || column==1 || (row==2 && column==2)) ?  cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}
