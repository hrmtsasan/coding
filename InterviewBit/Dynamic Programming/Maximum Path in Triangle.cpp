vector<vector<int>> dp;
int func(vector<vector<int>>& A, int i,int j)
{
    if(i==A.size()-1)
        return dp[i][j] = A[i][j];
        
    if(dp[i][j] != -1)
        return dp[i][j];
        
    return dp[i][j] = A[i][j] + max(func(A, i+1, j), func(A, i+1, j+1));
}
int Solution::solve(vector<vector<int> > &A) 
{
    dp.assign(A.size(), vector<int> (A[0].size(), -1));
    return func(A,0,0);
}
