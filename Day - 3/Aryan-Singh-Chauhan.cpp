// chauhan739's boilerplate for competetive programming
// press F9 to compile

#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned int ui;
typedef unsigned long long int ul;

using namespace std;

int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ui test;
  cin >> test;
  while(test--){
    ui n, m;
    cin >> n >> m;
    if(n == 1 || m == 1 || (n == 2 && m ==2)) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}

