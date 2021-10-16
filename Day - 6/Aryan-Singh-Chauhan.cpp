// chauhan739's boilerplate for competetive programming
// press F9 to compile

#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned int ui;
typedef unsigned long long int ul;

using namespace std;

void DFS(int, vector<int>[], vector<bool>);

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
    ll P, a, b, c, x, y;
    cin >> P >> a >> b >> c >> x >> y;
    if((P/(x*a + b)) > (P/(y*a + c))) cout << P/(x*a + b) << "\n";
    else cout << P/(y*a + c) << "\n";
  }
  return 0;
}

