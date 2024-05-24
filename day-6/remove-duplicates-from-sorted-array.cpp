#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        auto it = std::unique(nums.begin(), nums.end());

        nums.erase(it, nums.end());

        return nums.size();
        
    }
};


int main()
{   
    Solution s;
    
    int n = 0;
    std::cin>>n;
    std::vector<int>arr(n);
    for(int i=0; i<n; i++)
        {
            std::cin>>arr[i];
        }

    int ind = s.removeDuplicates(arr)
    std::cout<<ind;


    return 0;
}