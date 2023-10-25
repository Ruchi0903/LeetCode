class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i = 0, j = 1;
        int ans = 0;
        sort(nums.begin(), nums.end());

        if(nums.size()==1 && nums[i] == 0)
        {
           return 1;
        }
        if((nums.size()==1 && nums[i] == 1) || (nums[0] != 0))
        {
           return 0;
        }

        while(i < j && j<nums.size())
        {
            if(nums[j] - nums[i] == 2)
            {
                ans =  nums[i] + 1;
                return ans;
            }
            else if((nums[j] - nums[i] == 1) && (j == nums.size() - 1) && (i<=j) )
            {
                ans = nums[j] + 1;
                return ans;
            }
            else
            {
                i++;
                j++;
            }
        }
        return ans;
    }
};