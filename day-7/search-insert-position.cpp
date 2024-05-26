#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int low = 0;
        int high = nums.size()-1;//2
        int ans = 0;

        if(nums[0]>target)
            return 0;
        else if(nums[nums.size()-1]<target)
            return nums.size();

        while(low<=high)
        {   
            int mid = (low+high)/2;

            if(nums[mid]==target)
            {
                ans = mid;
                break;
            }
            else if(nums[mid]>=target && target>nums[mid-1])
            {
                ans = mid;
                break;
            }
            else if(nums[mid]>target)
            {
               high = mid-1;//3
            }
            else if(nums[mid]<target)
            {
                low = mid+1;//3
            }
        }

        return ans;


    }
};

int main()
{   
    Solution s;
    
    int n = 0;
    int target = 0;

    std::cin>>n>>target;

    std::vector<int>a(n);
    for(int i=0; i<n; i++)
        {
            std::cin>>a[i];
        }

    int res = s.searchInsert(a,target);
    std::cout<<res<<"\n";
    return 0;
}