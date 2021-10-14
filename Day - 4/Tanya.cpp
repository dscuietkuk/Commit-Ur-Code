#include<iostream>
# include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
	int T;//Number of testcases
	cin >>T;
	
	int arr[T];
	
	string s1,s2;
	for(int i=0;i<T;i++){  
	cin>>s1>>s2;
 }
   for(int i=0;i<T;i++){
   int l1=s1.length();
   int l2=s2.length();
   
   if(l1!=l2){
   	cout<<"NO"<<endl;
   }
   else{
   	string temp=s1+s1;
   	if(temp.find(s2)!=string::npos)
	   {
   		cout<<"YES"<<endl;
	   }
	else{
		cout<<"NO"<<endl;
	}    
}
}
return 0;
}
