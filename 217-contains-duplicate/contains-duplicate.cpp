class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;

        // traversing each element in the vector and storing each element's frequency in map.
        for(auto ele : nums)
        {
            // if a no is not in the map then it will store it, if a no is already present then it will
            // increase it's frequency.
            m[ele]++;
        }

        // traversing the map to see if anyone has occurred more than once.
        for(auto elem : m)
        {
            if(elem.second > 1)
            {
                return true;
            }
        }
        return false;
    }
};