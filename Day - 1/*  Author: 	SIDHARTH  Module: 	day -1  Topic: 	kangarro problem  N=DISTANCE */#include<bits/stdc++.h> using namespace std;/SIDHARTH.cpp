
    /*
 Author: 	SIDHARTH
 Module: 	day -1
 Topic: 	kangarro problem
 N=DISTANCE
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

int main() {
    int testcase;
    cin>>testcase;
std::cout << "N=";
    while(testcase--){
        int distance;
        cin>>distance;
        isPowerOfTwo(distance) ? cout<<"YES"<<endl : cout<<"NO"<<endl;

    }
}


