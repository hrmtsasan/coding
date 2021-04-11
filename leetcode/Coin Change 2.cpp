class Solution {
public:
    
    vector<vector<int>> t;
    int coinchange(vector<int>& coins,int amount,int n)
    {
        if(amount==0)
            return 1;
        if(n==0)
            return 0;
        if(t[n][amount]!=-1)
            return t[n][amount];
        if(coins[n-1]<=amount)
        {
            t[n][amount] = coinchange(coins,amount-coins[n-1],n) + coinchange(coins,amount,n-1);
            return t[n][amount];
        }

        else
        {
            t[n][amount] = coinchange(coins,amount,n-1);
            return t[n][amount];
        }
    }
    int change(int amount, vector<int>& coins)
    {
        int n = coins.size();
        t.resize(n+1, vector<int> (amount+1 , -1));
        return coinchange(coins,amount,n);
        
    }
};