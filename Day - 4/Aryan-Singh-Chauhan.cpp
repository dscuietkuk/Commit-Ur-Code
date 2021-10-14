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
    string s1, s2;
    cin >> s1 >> s2;
    s1 += s1;
    if((s1.length()/2) != s2.length()) cout << "NO\n";
    else if(s1.find(s2) != string::npos) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}

