#include<iostream>
using namespace std;
int main()
{
   int c;
   cin>>c;
   while(c--)                  //loop for test cases
   {
     double N,x=0;
     cin>>N;
     while(x<=1e18)
     {
       if(N==x)
       {
         cout<<"YES"<<end1;
         break;
       }
       else if(N!=x && x==0)
         x++;
       else
        x=x+x;
     }
     if(x>=1e18)
       cout<<"NO"<<end1;
   }
  return 0;
}
