#include <iostream>
using namespace std;

void checkSolveable(int n, int m)
{
	if (n == 1 || m == 1)
		cout << "YES\n";
	else if (m == 2 && n == 2)
		cout << "YES\n";
	else
		cout << "NO\n";
}

int main()
{
	int n,m,t;
	cin>>t;
	while(t--){
		cin>>n>>m;
	    checkSolveable(n, m);
	}
}
