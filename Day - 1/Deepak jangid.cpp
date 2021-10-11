#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int i,n,flag=0,x;
       cin>>x;
       
    for(i=1;i<=18;i++)
       {
         n=pow(2,i);
         if(n==x)
         {  
          flag=1;
          break;
         }
       }
       
       if(flag==1)
         cout<<"Yes\n";
       else
         cout<<"No\n";
    }
    return 0;
}
