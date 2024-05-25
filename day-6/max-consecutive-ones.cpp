#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

int moc = 0;
        int mx = 0;
        std::vector<int>res;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                moc++;
            }
            else if(nums[i]==0)
            {
                res.push_back(moc);
                moc = 0;
            }
        }

        res.push_back(moc);

        std::sort(res.begin(),res.end());
        return res[res.size()-1];
        
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

    int mv = s.missingNumber(arr);
    std::cout<<mv<<"\n";


    return 0;
}