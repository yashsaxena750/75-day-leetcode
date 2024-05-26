class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = a.size();
    if (n == 0) return 0;

    int longest = 1;
    unordered_set<int> st;
    //put all the array elements into set:
    for (int i = 0; i < n; i++) {
        st.insert(a[i]);
    }

    for (auto it : st) {
        if (st.find(it - 1) == st.end()) {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end()) {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;

    }
};


int main()
{   
    Solution s;
    
    int n = 0;
    std::vector<int>res;
    std::cin>>n;
    std::vector<int>a(n);
    for(int i=0; i<n; i++)
        {
            std::cin>>a[i];
        }

    int res = s.longestConsecutive(a);
   
    return 0;
}