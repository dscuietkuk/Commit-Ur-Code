#include <iostream>
using namespace std;

void fun(int n)
{
    while (n != 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n * 3 + 1;
        }
    }
    cout << n << endl;
}

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        fun(n);
    }
}
