#include<iostream>
using namespace std;

int main(){
   int x; 
   cout<<"enter the x for kangroos jump unit";
   
   cin>>x;
   while(x--){
       long long N;
       cout<<"enter the distance of point N";
       cin>>N;

       if((N & (N-1)) ==0)
       cout<<"YES, kangroo can reach"<<endl;
       else
       cout<<"NO, kangroo can not reach"<<endl;
   }
   return 0;
}
