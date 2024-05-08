#include "iostream"
#include "vector"
using namespace std;

class Solution {
public:
    static int maxOperations(vector<int>& nums, int k) {
        
        int n = nums.size();// 3 1 4 3
        int opc = 0;
        int i = 0;
        
        while(i<nums.size())
        {
            int j = i+1;
            int flag = 0;

            while(j<nums.size())
            {
                if(nums.at(i)+nums.at(j)==k)
                {
                    opc++;
                    nums.erase(nums.begin() + j);
                    nums.resize(nums.size());
                    i++;
                    flag = 1;
                    break;
                }
                else
                {
                    j++;
                }                
            }

            if(!flag)
                i++;
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