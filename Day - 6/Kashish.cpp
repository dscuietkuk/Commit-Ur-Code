#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;
        long long m,n;
        m=p/(x*a+b);
        n=p/(y*a+c);
        if (m>n)
        {
            cout<<m<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
    }
    return 0;
}
