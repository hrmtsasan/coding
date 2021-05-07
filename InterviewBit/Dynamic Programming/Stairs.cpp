vector<int> dp;
int solve(int& A, int pos)
{
    if(pos==A)
    {
        return 1;
    }
    if(pos>A)
    {
        return 0;
    }
    if(dp[pos]!=-1)
    {
        return dp[pos];
    }
    int res = solve(A,pos+1)+solve(A,pos+2);
    dp[pos] = res;
    return res;
}
int Solution::climbStairs(int A)
{
    dp.clear();
    dp.resize(A+1,-1);
    int ans = solve(A,0);
    return ans;
}