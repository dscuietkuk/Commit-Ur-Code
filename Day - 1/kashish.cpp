#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int t;               
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int x;
        x=1;
        while(x<n)
        {
            x+=x;
        }
        if(x==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
	return 0;
}
