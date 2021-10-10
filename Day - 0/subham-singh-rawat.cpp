#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int N;
    cin>>N;
    do {
      if(N%2 ==0) N = N/2;
      else N = N*3 + 1;
      cout<<N<<" ";
    }while(N !=1);
    
}
    return 0;
}
