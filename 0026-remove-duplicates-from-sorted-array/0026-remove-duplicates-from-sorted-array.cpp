class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                // we effectively overwrite any duplicates in the array and only keep the unique elements.
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};