#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;                //t denotes the number of testcases
    cin>>t;
    while(t--)
    {
        long long int n;             //n denotes the distances stored by user
        cin>>n;
        double k;                       //k is the power of 2 at which n occurs
        k=(log (n))/(log (2));
        
        double intpart,fractpart;      //if k is an integer then this satisfy the condtion else print NO
        fractpart=modf(k,&intpart);
        if(fractpart==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
