#include<iostream>
using namespace std;
bool powOf2(int x){
    if(x==0){
        return false;
    }
    return ((x&(x-1))==0);
}
void day1_problem(int N){
    if(powOf2(N)==true)
    cout<<"YES";
    else 
    cout<<"NO";
}
int main(){
    day1_problem(2);
}