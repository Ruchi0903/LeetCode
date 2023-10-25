class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroIndex = 0;

        // this for loop is for moving non zero element to the left by preserving their previous order as we are 
        // using nonZeroIndex var. (dry run it, you'll know better:)
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != 0)
            {
                nums[nonZeroIndex] = nums[i];
                nonZeroIndex++;
            }
        }

        // now we will place the zeroes to the end of the array/vector by iterating from the nonZeroIndex till n.
        for(int i = nonZeroIndex; i < nums.size(); i++)
        {
            // make the rest of the indices 0 after storing the non zero elements in the left of the vector.
            nums[i] = 0;
        }

    }
};