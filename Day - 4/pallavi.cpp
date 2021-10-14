#include <iostream>
#include <string>
using namespace std;
bool check(string a, string b)
{
    if(a.size()!=b.size())
       return false;
    
    string rotate = a + a;
    if (rotate.find(b) != -1)
        return true;
    else
        return false;
    
}
int main()
{
    string s1, s2;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s1 >> s2;
        if (check(s1, s2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
