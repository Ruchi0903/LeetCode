class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 1, profit = 0, minPrice = prices[0], n = prices.size();
        while(i<n){
            if(prices[i]<minPrice){
                minPrice = prices[i];
            }
            else{
                profit = max(profit, prices[i]-minPrice);
            }
            i++;
        }
        return profit;
    }
};