#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    static void moveZeroes(vector<int>& nums) {

        int nz = 0;
        int z = 0;
        int n = nums.size();

        for(int i=0;i<n-1;i++)
        {

            if(nums.at(nz)!=0 )
            {
                std::swap(nums.at(z),nums.at(nz));
                nz++;//1 2 3 4
                z++;//1 2 3 4
            }
            else
            {
                nz++;
            }
        }

        for(int el:nums)
            std::cout<<el<<" ";

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