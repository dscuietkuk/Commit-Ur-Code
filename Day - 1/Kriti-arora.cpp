#include<iostream>
using namespace std;

int main(){
	int T; 
	cin>>T;
	
	while(T>0){
		int N;
		cin>>N; 
		int c=0,x=1;
		if(N==0){
			cout<<"YES"<<endl;//if the kangaroo reaches the desired point
			c=1;
		}
		while(x<=N){
			if(x==N){
				cout<<"YES"<<endl;//if the kangaroo reaches the desired point
				c=1;
				break;
			}
			else{
				x+=x;
			}
		}
		if(c==0){
			cout<<"NO"<<endl;//if the kangaroo doesn't reach the desired point 
		}
		T--;
	}
	return 0;
}
