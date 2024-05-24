#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        // while(k--)
        // {
        //     int n = nums.size();
        //     int temp = nums[n-1];
        
        //     for(int i=n-2;i>=0;i--)//0 1 2 3 4
        //     {
            
        //         nums[i+1] = nums[i];//7 6 5 4
        //     }
        //     nums[0] = temp;
        // }


        //using logic of k+i%length
        int n = nums.size();
        std::vector<int>res(n);
        for(int i=0; i<n; i++)
        {
            res[(i+k)%n] = nums[ i ];
        }
        int i = 0;
        for(int el:res)
        {
            nums[i] = el;
            i++;
        }

    }
};




int main()
{   
    Solution s;
    
    int n = 0;
    int k = 0;

    std::cin>>n>>k;
    std::vector<int>arr(n);
    for(int i=0; i<n; i++)
        {
            std::cin>>arr[i];
        }

    s.rotate(arr,k);


    return 0;
}