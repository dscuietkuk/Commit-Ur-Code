#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int l, r, j = 2;
        cin >> l >> r;
        for (long long int i = l; i <= r; i++)
        {
            if (__gcd(i, j) != 1)
            {
                i = l;
                j++;
            }
        }
        cout << j << endl;
    }
}
