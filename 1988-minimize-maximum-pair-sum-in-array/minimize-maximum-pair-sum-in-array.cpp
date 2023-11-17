class Solution {
public:
    int minPairSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int left = 0, right = nums.size()-1;
        int minmaxpairsum = INT_MIN;

        while(left<right){
            int currentpairsum = nums[left] + nums[right];
            minmaxpairsum = std::max(minmaxpairsum, currentpairsum);
            left++;
            right--;
        }
        return minmaxpairsum;
    }
};