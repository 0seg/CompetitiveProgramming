class Solution {
public:
    char findTheDifference(string s, string t) {
        char k{};
        for(auto x : s) k ^= x;
        for(auto x : t) k ^= x;
        return k;

    }
};