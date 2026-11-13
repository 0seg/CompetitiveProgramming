class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m;

        for(size_t i{}; i<s.size(); ++i){
            m[s[i]] += 1;
        }

        for(size_t i{}; i<s.size(); ++i){
            if(m[s[i]] == 1) return i;
        }

        return -1;


    }
};