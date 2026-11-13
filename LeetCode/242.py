class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26];

        if(s.size() != t.size()) return false;

        for(size_t i{}; i<s.size(); ++i){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(size_t i{}; i<26; ++i){
            if(freq[i] != 0) return false;
        }
        return true;

        
    }
};