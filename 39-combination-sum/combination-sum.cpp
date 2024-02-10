class Solution {
public:
    void help(int i, vector<int>& candidates, int target, int sumTillNow, vector<int>& subset, vector<vector<int>> &ans) {
        
        // base cases
        if(sumTillNow == target) {
            ans.push_back(subset);
            return;
        }

        if(sumTillNow > target) return;

        if(i>=candidates.size()) return;

        // skip the ith element
        help(i+1, candidates, target, sumTillNow, subset, ans);

        // take the ith element
        sumTillNow += candidates[i];
        subset.push_back(candidates[i]);
        help(i, candidates, target, sumTillNow, subset, ans);

        // backtracking steps
        sumTillNow -= candidates[i];
        subset.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> subset;
        int sumTillNow = 0;
        vector<vector<int>> ans;

        help(0, candidates, target, sumTillNow, subset, ans);
        return ans;
    }
};