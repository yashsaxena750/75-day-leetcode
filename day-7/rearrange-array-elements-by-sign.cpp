class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();
        std::vector<int>res(n);
        int ind = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                res[ind] = nums[i];
                ind += 2;
            }
        }

        ind = 1
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                res[ind] = nums[i];
                ind += 2;
            }
        }

        return res;
        
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


    return 0;
}