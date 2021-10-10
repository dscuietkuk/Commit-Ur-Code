#include <iostream>
using namespace std;

int main(){
  int N;
  cin>>N;
  cout<<N<<" ";
  
  while(N!=1){
    
    if(N%2==0)
    {
      N = N/2;
      }
    else{
    N= (N*3)+1;
    }
    
    cout<<N<<" ";
  }
}
