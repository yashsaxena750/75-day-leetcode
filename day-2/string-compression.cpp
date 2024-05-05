#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
static int compress(vector<char>& chars) {
    
    int n = chars.size();
    int freq = 1;
    int resultIndex = 0;

    for (int i = 0; i < n; i++) {
        if (i + 1 < n && chars[i] == chars[i + 1]) {
            freq++;
        } else {
            chars[resultIndex++] = chars[i];
            if (freq > 1) {
                std::string count = std::to_string(freq);
                for (char ch : count) {
                    chars[resultIndex++] = ch;
                }
            }
            freq = 1;
        }
    }

    return resultIndex;

    }
};

int main()
{
    int n = 0;
    std::cin>>n;
    std::vector<char>chars(n);
    int x;
    for(int i=0;i<n;i++)
    {
        std::cin>>chars[i];
    }
    
    int newind = Solution::compress(chars);
    for(int i=0;i<newind;i++)
    {
        std::cout<<chars.at(i)<<" ";
    }

    return 0;
}