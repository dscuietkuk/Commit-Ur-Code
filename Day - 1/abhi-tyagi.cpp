#include<bits/stdc++.h>
using namespace std;

class answer {
    public:
      bool powerOfTwo(int x){
          return x && (!(x&(x-1)));
      }
       
      string canJump(int n){
          if(powerOfTwo(n))
            return "YES";
          else
            return "NO";
      }
};

int main() {
    int T;
    cin>>T;
    while(T--) {
        int N=0;
        std::cin >> N;
        answer obj;
        std::cout << obj.canJump(N)<< std::endl;
    }
    return 0;
}
