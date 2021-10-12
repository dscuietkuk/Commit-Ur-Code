#include <bits/stdc++.h>
using namespace std;
bool levelcomplete(int i, int j, int rows, int cols, vector<vector<char>> &a)
{
    if (i == 1 && j == cols - 1)
    {
        return true;
    }
    if (i < 0 || i >= rows || j < 0 || j >= cols)
    {
        return false;
    }
    if (a[i][j] != '0')
    {
        return false;
    }

    if (levelcomplete(i + 1, j, rows, cols, a))
    {
        return true;
    }
    if (levelcomplete(i - 1, j, rows, cols, a))
    {
        return true;
    }
    if (levelcomplete(i, j + 1, rows, cols, a))
    {
        return true;
    }
    if (levelcomplete(i, j - 1, rows, cols, a))
    {
        return true;
    }
    if (levelcomplete(i + 1, j + 1, rows, cols, a))
    {
        return true;
    }
    if (levelcomplete(i - 1, j - 1, rows, cols, a))
    {
        return true;
    }
    if (levelcomplete(i + 1, j - 1, rows, cols, a))
    {
        return true;
    }
    if (levelcomplete(i - 1, j + 1, rows, cols, a))
    {
        return true;
    }

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<char>> arr(2);
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char numbers;
                cin >> numbers;
                arr[i].push_back(numbers);
            }
        }
        if (levelcomplete(0, 0, 2, n - 1, arr))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
