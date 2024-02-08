class Solution {
public:
    void permute(int pos, vector<int>& nums, vector<vector<int>>& ans) {
        if(pos>=nums.size()) {  // base case
            ans.push_back(nums);
        }

        // UNORDERED SET
        unordered_set<int> m;   // holds all the elements which we have kept on a particular position.

        for(int i = pos; i<nums.size(); i++) {
            // checking if the elem stored in set is coming again and going to create duplicate perms, so ignoring that below
            if(m.find(nums[i]) != m.end())  continue;
            // Now, since nums[i] is being used, so now insert it into the set, so that next time we can ignore it for the same pos.
            m.insert(nums[i]);
            swap(nums[i], nums[pos]);
            permute(pos+1, nums, ans);
            swap(nums[i], nums[pos]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        permute(0, nums, ans);
        return ans;
    }
};