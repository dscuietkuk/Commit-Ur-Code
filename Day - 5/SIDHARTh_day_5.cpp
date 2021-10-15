/* author :SIDHARTH
   TASK:DAY 5*/


#include<bits/stdc++.h>
using namespace std;

 
int
main ()
{
  
int t;
  
cin >> t;
  
while (t--)
    {
      
int n, k;
      
cin >> n >> k;
      
bool arr[n] =
      {
      false};
      
for (int i = 0; i < k; i++)
	{
	  
int j;
	  
cin >> j;
	  
arr[j] = true;
	
} 
int A= n, B = 0;
      {
	
for (int i = n - 1; i >= 0; i--)
	  {
	    
if ((A - (n - i)) <= 0)
	      {
		break;
	      }
	    
if (arr[i] == true)
	      {
		
A = B - (n - i);
		
B++;
	      
}
	  }
      
}
      
cout << c << endl;
    
 
}
}
