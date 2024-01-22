class Solution {
public:
    int search(vector<int>& nums, int target) {
       int n = nums.size();
       int low = 0, high = n-1;
       while(low <= high)
       {
            // calculate mid of "nums"
           int mid = low + (high-low)/2;

            // check if target == mid element
            if(target == nums[mid])
            {
                return mid;
            }

            // check if target is greater than mid elem, move right, ignore left
            if(target > nums[mid])
            {
                low = mid + 1;
            }

            // if target is lesser than mid elem, move left, ignore right
            else
            {
                high = mid - 1;
            }
       } 
       return -1;
    }
};