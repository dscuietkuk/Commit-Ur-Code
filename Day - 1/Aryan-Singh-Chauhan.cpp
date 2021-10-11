// chauhan739's boilerplate for competetive programming
// press F9 to compile

#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned int ui;
typedef unsigned long long int ul;

using namespace std;

int main(){
  // #ifndef ONLINE_JUDGE
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  // #endif

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n;
  cin >> n;
  ll i = 1, x = 1;
  bool flag = 0;

  while(i <= n){
    if(i == n){
      flag = 1;
      break;
    }
    i += x;
    x = i;
  }

  if(flag) cout << "YES\n";
  else cout << "NO\n";
  
  return 0;
}

