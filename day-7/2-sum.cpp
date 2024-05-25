class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target) {
    
    std::unordered_map<int, int> hashmap;
    std::vector<int> result;

    for (size_t i = 0; i < A.size(); ++i) {
        int complement = target - A[i];

        auto it = hashmap.find(complement);
        if (it != hashmap.end()) {
            result.push_back(it->second);
            result.push_back(i);
            return result;
        }

        hashmap[A[i]] = i;
    }

    return result;


    }
};