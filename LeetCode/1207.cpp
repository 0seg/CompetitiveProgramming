class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        unordered_set<int> s;


        for(auto x : arr) m[x]++;

        for(auto [x, y] : m){
            if(s.find(y) != s.end()) return false;

            s.insert(y);
        }

        return true;


    }
};