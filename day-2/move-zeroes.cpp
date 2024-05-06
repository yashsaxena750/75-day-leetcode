#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static void moveZeroes(vector<int>& nums) 
    {

    int n = nums.size();
    int zc = 0;

    if(n>1)
    {
        for(int i=0; i<n;i++)
        {
            if(nums.at(i)==0)
            {
                zc++;   
            }
        }

        nums.erase(std::remove(nums.begin(), nums.end(), 0), nums.end());
        
        while(zc)
        {
            nums.push_back(0);
            zc--;
        }

        // for(int el:nums)
        // {
        //     std::cout<<el<<" ";
        // }
        
    }
    }
};



int main()
{

    int n = 0;
    std::cin>>n;
    std::vector<int>nums(n);
    for(int i=0; i<n; i++)
    {
        std::cin>>nums[i];
    }

    Solution::moveZeroes(nums);

    return 0;
}