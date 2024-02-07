class Solution {
public:
    vector<vector<int>> helper(vector<int>& nums, int i){

        // base case
        if(i>= nums.size()) return {{}};

        vector<vector<int>> partialAns = helper(nums, i+1);     // start from i+1th element, we'll deal with ith element.
        vector<vector<int>> ans;

        // in ans, push all of the elements (subsets) of partialAns
        for(vector<int> x:partialAns){
            ans.push_back(x);
        }

// Now add the ith element in each of the subsets which are now present in ans and paritalAns vectors. Since we told recursion to deal with all the elements except ith.

        for(vector<int> x:partialAns){
            x.push_back(nums[i]);
            ans.push_back(x);
        }

        return ans;

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        return helper(nums,0);
    }
};