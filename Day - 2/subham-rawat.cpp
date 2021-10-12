#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str ="" , temp ="";
        for(int i=0; i<2; i++){
            cin>>temp;
            str += temp;
        }
        char arr[2][n];
        int k=0;
        for(int i=0; i<2; i++){
            for(int j=0; j<n; j++){
                arr[i][j] = str[k];
                k++;
            }
        }

        int i=0 , j=0;
        while(i<n){
            if(i<n-1 && arr[0][i+1] == '0') {i++; j==0;}
            else if(j==0 && arr[j+1][i] =='0') j=1;
            else if(i<n-1 && arr[1][i+1] == '0') {j=1; i++;}
            else break;
        }
        if(i==n-1 && j==1) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }

    return 0;
}







