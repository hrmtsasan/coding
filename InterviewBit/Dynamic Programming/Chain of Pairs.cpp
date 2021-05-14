// This problem is similar to Longest Increasing Sequence.
int Solution::solve(vector<vector<int> > &A) 
{
    vector<int> B;
    vector<int> C;
    
    for(int i=0;i<A.size();i++)
    {
        B.push_back(A[i][0]);
        C.push_back(A[i][1]);
    }
    vector<int> dp(B.size(),1);
    for(int i=0;i<B.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(B[i] > C[j] and dp[i] < dp[j]+1)
            {
                dp[i] = dp[j]+1;
            }
        }
    }
    return *max_element(dp.begin(), dp.end());
}
