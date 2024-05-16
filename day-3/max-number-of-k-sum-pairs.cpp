#include "iostream"
#include "vector"
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    static int maxOperations(vector<int>& nums, int k) {
        
        std::sort(nums.begin(),nums.end());
        int n = nums.size();
        int fp = 0;
        int sp = n-1;
        int opc = 0;

        while(fp<sp)
        {
            if(nums.at(fp)+nums.at(sp)==k)
            {
                fp++;
                sp--;
                opc++;
            }
            else if(nums.at(fp)+nums.at(sp)<k)
            {
                fp++;//2
            }
            else
            {
                sp--;//4
            }
        }

        return opc;

    }
};


int main()
{
    int n = 0;
    int k = 0;
    std::cin>>n;
    std::vector<int>nums(n);
    std::cin>>k;
    for(int i=0; i<n; i++)
    {
        std::cin>>nums[i];
    }

    std::cout<<Solution::maxOperations(nums,k);

    return 0;
}