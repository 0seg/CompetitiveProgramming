class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26];

        for(auto x : magazine) freq[x - 'a']++;

        for(auto x : ransomNote){
            if(freq[x - 'a']-- == 0) return false;
        }

        return true;

    }
};