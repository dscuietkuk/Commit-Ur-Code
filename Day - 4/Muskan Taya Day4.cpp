#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		string s1,s2;
		cin>>s1>>s2;
		int l1=s1.length();
		int l2=s2.length();
		if(l1!=l2)
		cout<<"NO"<<endl;
		else
		{
			string s3=s1+s1;
			if(s3.find(s2)!=string::npos)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
