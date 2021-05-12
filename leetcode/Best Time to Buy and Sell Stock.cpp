class Solution {
public:
    // find the minimum element in the array and subtract with all 
    //elements in the array and find the maximum value
    int maxProfit(vector<int>& prices)
    {
        int profit = 0;
        int maxprofit = 0;
        int min_price = prices[0];
        for(int i=0;i<prices.size();i++)
        {
            // find the minimum element
            min_price = min(min_price,prices[i]);
            profit = prices[i] - min_price;
            maxprofit = max(maxprofit, profit);
            
        }
        return maxprofit;
    }
};