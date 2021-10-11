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
    int n;
    cin >> n;
    while(n != 1){
      cout << n << " ";
      if(n % 2) n = (n * 3) + 1;
      else n /= 2;
    }
    cout << n << "\n";
  }
  return 0;
}

