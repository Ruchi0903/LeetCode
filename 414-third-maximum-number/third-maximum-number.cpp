class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long firstMax = LLONG_MIN;
        long long secondMax = LLONG_MIN;
        long long thirdMax = LLONG_MIN;

        for (const int num : nums) {
            if (num == firstMax || num == secondMax || num == thirdMax) {
                continue;  // Skip duplicates
            }

            if (num > firstMax) {
                thirdMax = secondMax;
                secondMax = firstMax;
                firstMax = num;
            } else if (num > secondMax) {
                thirdMax = secondMax;
                secondMax = num;
            } else if (num > thirdMax) {
                thirdMax = num;
            }
        }

        if (thirdMax != LLONG_MIN) {
            return thirdMax;
        } else {
            return firstMax;  // If there is no third max, return the first max
        }
    }
};
