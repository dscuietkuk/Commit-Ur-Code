#include<bits/stdc++.h>
using namespace std;

class answer{
    public:
    
    bool checkRotations(string x, string y) {
        if(x.size()!=y.size())
       return false;
       string temp=x+x;
       return (temp.find(y)!=string::npos);
    }
};

int main() {
    int T;
    std::cin>>T;
    while(T--) {
        string a,b;
        std::cin>>a;
        std::cin>>b;
        answer obj;
        if(obj.checkRotations(a,b)==1){
            std::cout << "YES" << std::endl;
        }
        else
            std::cout << "NO" << std::endl;
    }
    return 0;
}
