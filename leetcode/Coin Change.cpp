class Solution {
public:
    vector<vector<int>> t;
    int change(vector<int>& coins, int amount, int n)
    {
        if(n==0)
            return INT_MAX-1;
        if(amount==0)
            return 0;
        
        if(t[n][amount]!=-1)
            return t[n][amount];
        if(coins[n-1]<=amount)
        {
            t[n][amount] = min(1+change(coins,amount-coins[n-1],n),
                              change(coins,amount,n-1));
            return t[n][amount];
        }
        else
        {
            t[n][amount] = change(coins,amount,n-1);
            return t[n][amount];
            
        }
    }
    int coinChange(vector<int>& coins, int amount) 
    {
        int n = coins.size();
        t.resize(n+1, vector<int> (amount+1, -1));
        int ans = change(coins,amount,n);
        if(ans == INT_MAX-1)
            return -1;
        else
            return ans;
        
    }
};