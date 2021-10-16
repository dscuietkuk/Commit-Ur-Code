#include<iostream>
using namespace std;
int main()
{
	int tc,i;
	cin>>tc;
    int anar[tc];
    int rocket[tc];
	for(i=0;i<tc;i++)
	{
		int P,a,b,c,x,y; 
		cin>>P>>a>>b>>c>>x>>y;
		int n1=a*x+b;
		anar[i]=P/n1;
		int n2=a*y+c;
		rocket[i]=P/n2;
		}
		for(i=0;i<tc;i++)
		{
			cout<<anar[i]<<" "<<rocket[i]<<endl;
		}
}
