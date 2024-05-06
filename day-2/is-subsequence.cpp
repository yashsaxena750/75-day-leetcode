#include<iostream>
using namespace std;

class Solution {
public:
    static bool isSubsequence(string s, string t) {

    int fp = 0;
    int sp = 0;

    int lenc = 0;

    for(int i=0;i<t.length();i++)
    {
        if( s[fp] == t[sp] )
        {
            lenc++;//2
            fp++;//2
            sp++;//3
        }
        else if( s[fp] != t[sp] )
        {
            sp++;//2
        }

    }

    if(lenc==s.length())
        return true;
    else
        return false;


        
    }
};


int main()
{
    std::string s;
    std::string t;
    std::cin>>s>>t;
    std::cout<<Solution::isSubsequence(s,t);

    
    return 0;
}