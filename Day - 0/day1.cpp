
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
    cout<<"enter distance covered per step";
    cin>>x;

    while(x--){
        int N;
        cout<<"enter the distance(N) from the point";
        cin>>N;
        ReachOrNot(N) ? cout<<"YES,can reach"<<endl : cout<<"NO,can't' reach"<<endl;

    }
}
