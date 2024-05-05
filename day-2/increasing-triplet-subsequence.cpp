#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    static bool increasingTriplet(vector<int>& nums) {

        int left = INT_MAX;
        int mid = INT_MAX;
        int n = nums.size();

        for(int i=0;i<n;i++)
        {

            if(nums[i]<=left)
            {
                left = nums[i];
            }
            else if(nums[i]<=mid)
            {
                mid = nums[i];
            }
            else
            {
                return true;
            }

        }

        return false;
        
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

    std::cout<<Solution::increasingTriplet(nums);

    return 0;
}