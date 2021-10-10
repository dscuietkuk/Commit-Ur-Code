#include<iostream>
using namespace std;
int main()
{
int n,tc,a;
  cin>>tc;

  for(a=1a=tc;;a<=tc;a++){
  cin>>n;
  cout<<n<<" ";
  while(n!=1)
  {
  if(n%2==0)
  {
       n=n/2;
    cout<<n<<" ";
  }
    else
    {
    n=(n*3)+1;
    cout<<n<<" ";
    }

  }
  }
}
