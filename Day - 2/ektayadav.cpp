#include <bits/stdc++.h>
using namespace std;
bool check(int i,int j,int rows,int cols, vector<vector<char>>&arr)
{
    if(i==1 &&  j==cols-1)
    return true;
    if(i<0 || i>=rows || j<0 || j>=cols || arr[i][j]!='0')
    {
            return false;
    }
    arr[i][j] = 1;
    if(check(i+1,j,rows,cols,arr))
    return true;
    if(check(i-1,j,rows,cols,arr))
    return true;
    if(check(i,j+1,rows,cols,arr))
    return true;
    if(check(i,j-1,rows,cols,arr))
    return true;
    if(check(i+1,j+1,rows,cols,arr))
    return true;
    if(check(i-1,j-1,rows,cols,arr))
    return true;
    if(check(i+1,j-1,rows,cols,arr))
    return true;
    if(check(i-1,j+1,rows,cols,arr))
    return true;
    arr[i][j] = 0;
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<char>>arr(2);
        for(int i = 0;i<2;i++)
        {
            for(int j = 0;j<n;j++)
            {
                char value;
                cin>>value;
                arr[i].push_back(value);
            }
            
        }
        if(check(0,0,2,n-1,arr))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    
    return 0;
}
