# include <iostream>
using namespace std;
 
bool areRotations(string str1, string str2)
{
   if (str1.length() != str2.length())
        return false;
 
   string temp = str1 + str1;
  return (temp.find(str2) != string::npos);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1; 
        string str2;
        cin>>str1;
        cin>>str2;
        if (areRotations(str1, str2))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
