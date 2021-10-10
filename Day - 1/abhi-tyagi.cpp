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
    long long N;
    cout<<"Point at distance=";
    std::cin >>N;
	jump(N)? cout<<"Yes"<<endl: cout<<"No"<<endl;

	return 0;
}
