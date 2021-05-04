int Solution::lis(const vector<int> &A) 
{
    if(A.empty())
    {
        return 0;
    }
    vector<int> dp(A.size(),1);
    for(int i=1;i<A.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(A[j] < A[i] and dp[i]< dp[j]+1)
            {
                dp[i]++;
            }
        }
    }
    return *max_element(dp.begin(),dp.end());
}
