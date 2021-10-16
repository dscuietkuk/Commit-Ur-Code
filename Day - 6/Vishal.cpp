#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long p , a , b , c , x , y;
        cin>>p>>a>>b>>c>>x>>y;

        if (p/(x*a+b) > p/(y*a+c))
        {
            cout<<p/(x*a+b)<<endl;
        }
        else
        {
            cout<<p/(y*a+c)<<endl;
        }
        
        
    }

    return 0;
}