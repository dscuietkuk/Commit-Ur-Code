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
       
    for(i=0;i<17;i++)
       {
         n=pow(2,i);
         if(n==x)
         {  
          flag=1;
          break;
         }
       }
       
       if(flag==1)
         cout<<"True\n";
       else
         cout<<"False\n";
    }
    return 0;
}
