class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        // int fromBegin = 1; and int fromLast = 1;: These two variables are used to keep track of the running product from the beginning and from the end of the array, respectively. They are initialized to 1 because when you start multiplying, multiplying by 1 does not change the value.
        int fromBegin=1;
        int fromLast=1;

        // vector<int> res(n, 1);: This line initializes the result vector res with n elements, all initialized to 1. This is because, at the beginning, each element of res is assumed to contain the product of all elements except itself, and when you multiply by 1, the value remains unchanged.
        vector<int> res(n,1);
        
        for(int i=0;i<n;i++){
            res[i]*=fromBegin;
            fromBegin*=nums[i];
            res[n-1-i]*=fromLast;
            fromLast*=nums[n-1-i];
        }
        return res;
    }
};