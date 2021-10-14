#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        long long int a = s1.length();
        s1 += s1;
        if ((s1.find(s2) != -1) && (s2.length() == a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
