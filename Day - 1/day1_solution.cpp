#include<iostream>
using namespace std;
bool isPowerof2(int N){
    if(N==0)
    return false;
    return ((N&&(N-1))==0);
}
string kangaroo(int N){
    if(isPowerof2(N))
    return "True";
    else 
    return "False";
}
int main(){
    cout<<kangaroo(3);
}