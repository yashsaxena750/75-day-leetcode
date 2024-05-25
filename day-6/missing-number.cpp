#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // int mv = 0 ;
        // std::sort(nums.begin(),nums.end());
        // int n = nums.size();

        // if(n==1)
        // {
        //     if(nums[0]==1)
        //         return 0;
        //     else
        //         return 1;
        // }

        // else if(nums[0]!=0)
        // {
        //     return 0;
        // }

        // else
        // {
        
        //     for(int i=0;i<n;i++)
        //     {
        //         if(i+1<n)
        //         {
        //             if(nums[i+1]-nums[i]!=1)
        //             {
        //                 mv = nums[i] + 1;
        //                 break;
        //             }
        //         }
        //         else
        //         {
        //             return n;
        //         }
        //     }
        // }

        // return mv;


        int n = nums.size();
        nums.resize(n+1);
        int mv = 0;

        std::sort(nums.begin(),nums.end());
        for(int i=0; i<=n;i++)
        {
            if(nums[i]!=i)
            {
                mv = i;
            }
        }

        return mv;

        
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