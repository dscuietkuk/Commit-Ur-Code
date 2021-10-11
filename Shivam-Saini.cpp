#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int x = 1;
        while (x < n)
        {
            x += x;
        }
        if (x == n || n==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
