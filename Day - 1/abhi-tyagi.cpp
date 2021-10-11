#include<math.h>
#include<iostream>
using namespace std;

bool jump(long long n)
{
if(n==0)
return false;

return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
	jump(3)? cout<<"YES"<<endl: cout<<"NO"<<endl;
	jump(2)? cout<<"YES"<<endl: cout<<"NO"<<endl;

	return 0;
}
