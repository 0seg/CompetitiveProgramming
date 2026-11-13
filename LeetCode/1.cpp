class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;

        for(size_t i{}; i<nums.size(); ++i){

            int x = target - nums[i];
            
            if(m.find(x) != m.end()){
                return {m[x], static_cast<int>(i)};
            }

            m[nums[i]] = i;
        }
        return {};
    }
};