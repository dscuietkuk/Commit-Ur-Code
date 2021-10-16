/*Author: Sidharth
  Task : DAY 6 
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    int t;
    cin >> t;
    while (t--)
    {
        long long int p, a, b, c, x, y;
        cin >> p >> a >> b >> c >> x >> y;
        long long int  X = p/(a*x+b);
        long long int Y = p/(a*x+c);
        long long int M = max(X, Y);
        cout << M << endl;
    }
}
