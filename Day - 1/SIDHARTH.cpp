/*
 Author: 	SIDHARTH
 Module: 	day -1
 Topic: 	kangarro problem
*/  
#include<bits/stdc++.h>
using namespace std;
  
// Function to check if N is power of 2
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
  
   return (ceil(log2(n)) == floor(log2(n)));
}
  
// Driver program
int main()
{ int N;
  
std::cout << "N=";
    cin >> N;
    isPowerOfTwo(N)? cout<<"Yes"<<endl: cout<<"No"<<endl;
   
  
    return 0;
}
