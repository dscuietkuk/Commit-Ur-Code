# include <iostream>
using namespace std;

bool isRotations(string str1, string str2){
   if (str1.length()!= str2.length())
        return false;

   string temp = str1 + str1;
  return (temp.find(str2) != string::npos);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string string1; 
        string string2;
        cin>>string1;
        cin>>string2;
        if (isRotations(string1, string2))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
