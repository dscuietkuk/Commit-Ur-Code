#include <iostream>
#include <string.h>
using namespace std;
class Kangaroo
{
public:
    static string canJump(long long N)
    {
        while (N != 1)
        {
            if (N % 2 != 0)
                return "NO";
            N = N / 2;
        }
        return "YES";
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;
        cout << Kangaroo::canJump(N) << endl;
    }
    return 0;
}