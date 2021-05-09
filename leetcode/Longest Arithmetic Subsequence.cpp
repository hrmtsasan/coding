class Solution {
public:
    int longestArithSeqLength(vector<int>& A) 
    {
        vector<vector<int>> dp(A.size(), vector<int> (1001,1));
        int ans=1;
        for(int i=1;i<A.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                int diff = A[i] - A[j] + 500;
                if(dp[i][diff]<dp[j][diff]+1)
                {
                    dp[i][diff] = dp[j][diff]+1;
                }
                ans = max(ans,dp[i][diff]);
            
            }
        }
        return ans;
    }
};