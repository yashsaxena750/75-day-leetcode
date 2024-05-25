class Solution {
public:
    int subarraySum(vector<int>& A, int k) {
        unordered_map<int,int>mp;
        mp[0] = 1;
        int sum = 0;
        int ans = 0;
        
        for(int i=0; i<A.size(); i++)
        {
            sum += A[i];
            if( mp.find( sum - k ) != mp.end() )
            {
                ans += mp[sum-k];
            }
            
            mp[sum]++;
        }
        
        
        return ans;
    }
};