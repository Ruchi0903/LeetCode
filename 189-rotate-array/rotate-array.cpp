class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        if (k == 0) {
            return;
        }
        vector<int> rotated;
        for (int i = nums.size() - k; i < nums.size(); i++) {
            rotated.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size() - k; i++) {
            rotated.push_back(nums[i]);
        }
        nums = rotated;
    }
};