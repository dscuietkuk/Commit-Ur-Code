#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int N;
    cin>>N;
    while(N--){
      if(N%2 ==0) N = N/2;
      else N = N*3 + 1;
    }
    return 0;
}
