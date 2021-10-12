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
    string str1, str2;
    cin >> str1 >> str2;
    int i = 0, j = 0;
    while(i < n){
      if(str1[i] == '1'){
	cout << "NO\n";
	break;
      }
      else if(str2[j] == '0' || str2[j+1] == '0'){
	cout << "YES\n";
	break;
      }
      i++;
      j++;
    }
  }
  return 0;
}

