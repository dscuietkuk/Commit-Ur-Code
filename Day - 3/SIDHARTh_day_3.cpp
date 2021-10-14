/*  
    author:Sidharth
    task:day3
     
*/

#include <bits/stdc++.h>
using namespace std;
long long t,n,m;

int main()
{
   ios::sync_with_stdio(false); 
   cin>>t;
    while(t--)
    {
        cin>>n>>m;
       if(m*n<=m+n)     cout<<"yes"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}
