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
        long long int anar = (x * a) + b;
        long long int rocket = (y * a) + c;
        long long int mini = min(anar, rocket);
        cout << p / mini << endl;
    }
}
