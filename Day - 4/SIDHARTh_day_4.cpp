/*
Author : Sidharth
task : day4

*/

# include <bits/stdc++.h>
using namespace std;
 
/* Function checks if passed strings (str1
   and str2) are rotations of each other */
bool areRotations(string str1, string str2)
{
   /* Check if sizes of two strings are same */
   if (str1.length() != str2.length())
        return false;
 
   string temp = str1 + str1;
  return (temp.find(str2) != string::npos);
}
 
/* Driver program to test areRotations */
int main()
{
   string str1 , str2 ;
   cin>>str1;
   cin>>str2;
   if (areRotations(str1, str2))
     printf("YES");
   else
      printf("NO");
   return 0;
}
