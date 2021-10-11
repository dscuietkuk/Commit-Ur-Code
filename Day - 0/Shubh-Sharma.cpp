#include<bits/stdc++.h>
using namespace std;

int main(){

int Testcase;
int Number;
cin>>Testcase;
    for(int i=1; i<=Testcase;i++){
        cin>>Number;
        while(Number!=1){
            cout<<Number<<" ";
            if(Number%2==1)
                Number=(Number*3)+1;
            else
                Number=Number/2;
        }
    cout<<Number<<endl;
    }

return 0;
}
