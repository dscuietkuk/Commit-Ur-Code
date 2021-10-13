#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> v;
        int n, a = 0;
        cin >> n;
        string s;
        for (int i = 0; i < 2; i++)
        {
            cin >> s;
            v.push_back(s);
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (v[0][i] != '0' && v[1][i] != '0')
            {
                a++;
            }
        }
        if (a > 0)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}
