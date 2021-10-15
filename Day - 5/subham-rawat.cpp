#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        int n , k; 
        cin>>n>>k;
        bool arr[n] = {false};
        for(int i =0; i<k; i++){
            int j; 
            cin>>j;
            arr[j] = true;
        }
        int counter = n , count =0;
        for(int i =n-1; i>=0; i--){
            if((counter - (n-i))<=0){break;}
            if(arr[i] == true){
                counter = counter - (n-i);
                count++;
            }
        }
        cout<<count<<endl;

    }
    

    return 0;
}







