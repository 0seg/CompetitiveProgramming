class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set s(nums1.begin(), nums1.end());
        unordered_set s2(nums2.begin(), nums2.end());

        vector<int> d;
        vector<int> d2;

        for(auto x : s){
            if(s2.find(x) == s2.end()){
                d.push_back(x);
            }
        }
        for(auto x : s2){
            if(s.find(x) == s.end()){
                d2.push_back(x);
            }
        }

        return {d,d2};


    }
};