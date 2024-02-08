class Solution {
public:
    void help(int i, int n, int k, vector<int>& subset, vector<vector<int>>& ans) {

        //base cases
        if(k==0) {
            ans.push_back(subset);
            return;
        }
        if(k > n - i + 1) return;
        if(i>n) return;

        // take the ith ele
        subset.push_back(i);
        help(i+1, n, k-1, subset, ans);

        // skip the ith ele
        subset.pop_back();
        help(i+1, n, k, subset, ans);


    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> subset;
        vector<vector<int>> ans;
        help(1, n, k, subset, ans);
        return ans;
    }
};