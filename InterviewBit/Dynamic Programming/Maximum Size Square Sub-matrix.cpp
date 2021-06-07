int Solution::solve(vector<vector<int> > &A) 
{
    vector<vector<int>> dp(A.size(), vector<int> (A[0].size(),0));
    int ans = 0;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if(i==0 or j==0)
            {
                dp[i][j] = A[i][j];
            }
                
            else if(A[i][j]==1)
            {
                dp[i][j] = 1 + min(dp[i-1][j],
                                   min(dp[i][j-1],
                                   dp[i-1][j-1]));
                
            }
            ans = max(ans,dp[i][j]);
        }
    }
    
    return ans*ans;
    
}
