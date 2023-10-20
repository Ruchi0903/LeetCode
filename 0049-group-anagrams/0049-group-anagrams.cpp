class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;

        for(auto x: strs)
        {
            // word is the sorted version(aet) of x(the original word => tea)
            string word = x;
            sort(word.begin(), word.end());
            m[word].push_back(x); // word = aet pushed as key in map and x is pushed as the original word in the vector string
        }

        vector<vector<string>> ans;
        for(auto x: m)
        {
// it adds a group of anagrams (represented as a vector of strings) to the final result ans.
            ans.push_back(x.second);
        }
        return ans;
    }
};