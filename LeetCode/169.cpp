class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;

        for(size_t i{}; i<nums.size(); ++i){
            m[nums[i]]++;
            if(m[nums[i]] > (nums.size())/2) return nums[i];
        }
        return -1;
    }
};