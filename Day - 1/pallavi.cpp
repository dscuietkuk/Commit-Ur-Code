#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    int t;
    long long int n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int x = 1;
        long long int x = 1;
        while (x < n)
        {
            x += x;
        }
        if (x == n || n == 0)
        if (x == n )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}

