#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    static string reverseWords(string s) {
        std::string fin;
        std::vector<std::string> result;

        for(int i=0; i<s.length();i++)
        {
            if(s[i]==' ' && s[i+1]==' ')
            {
                s.erase(i, 1);
                --i;
            }
        }
        if(s[0]==' ')
        {
            s.erase(0,1);
        }

        for(int i=0; i<=s.length();i++)
        {
            if(s[i]!=' ' && i!=s.length())
            {
                fin += s[i];
            }
            if(s[i]==' ' || i==s.length())
            {
                result.push_back(fin);
                fin = "";
            }

        }

        fin = "";
        for(int i=result.size()-1;i>=0;i--)
        {
             fin += result.at(i);
             if(i!=0)
                fin += ' ';
        }


        if(fin[0]==' ')
            fin.erase(0,1);
        return fin;
        
    }
};

int main()
{
    std::string str;
    std::getline(std::cin, str);
    std::cout<<Solution::reverseWords(str);

    return 0;
}