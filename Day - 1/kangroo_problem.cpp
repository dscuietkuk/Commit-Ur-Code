
#include<iostream>
using namespace std;


bool ReachOrNot(int N){

   if(N==1)
    return true;
   else if(N==0 || N%2!=0)
    return false;
   return ReachOrNot(N/2);
}
int main() {
    int x;
    
    cin>>x;

    while(x--){
        int N;

        cin>>N;
        ReachOrNot(N) ? cout<<"YES"<<endl : cout<<"NO"<<endl;

    }
}
